section "j04_m1_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(1, "M1_01F", 0);
        if (var0 == 0){
            Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
            }
        else if (var0 == 1){
            Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
            }
        else if (var0 == 2){
            Background_Bg_GS2("BG_SC202_?_0", 1, #1, 0);
            }
        else if (var0 == 3){
            Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
            }
        else if (var0 == 4){
            Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
            }
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_003_D00", 127, 40);
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝, what's up?");
            Voice_PlayVoice("J0401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah. Uh... Are you free this Sunday?");
            Message_MsgSel("Yeah, I am.", "I kind of have plans...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M1", 0);
                System_Call_GS2("J06", "M1", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0401000_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, I see...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Did you need something?");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("J0401000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No!\nI was also thinking that I might\nwork at Sangosho.\nThat's good. Haha.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Is there something happening next\nSunday?)");
                Parameter_AddCh1Param(1, 60, #5);
                Parameter_AddCh1Param(1, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(1, 86, 1);
        }
    else {
        int var1 = Parameter_GetPl1Param(12);
        switch (var1){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(1, 130) >= 4){
            SoundEffect_PlaySE(19, 127);
            System_Wait(#300);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello? ... Ah, it's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah. Uhh... Are you free this Sunday?");
            Message_MsgSel("I don't have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M1", 10);
                System_Call_GS2("J06", "M1", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0401000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, I see...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Did you need something?");
                Voice_PlayVoice("J0401000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No! I just wanted to check with you.\nThat's all I really wanted to do.\nHaha.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(1, 60, #5);
                Parameter_AddCh1Param(1, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
