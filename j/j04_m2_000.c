section "j04_m2_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(2, "M2_01F", 0);
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
        Music_PlayBGM(0, "MN_C_02_003_D00", 127, 40);
        if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("", 2, "J0402000_B00000");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝. Got a minute?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Shiba＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you free this Sunday?");
            Message_MsgSel("Yeah, I am. Why?", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M2", 0);
                System_Call_GS2("J06", "M2", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("J0402000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I see. Sorry for stopping you.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(2, 60, #5);
                Parameter_AddCh1Param(2, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Are you free... this Sunday?");
            Message_MsgSel("Yeah, I am. Why?", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M2", 0);
                System_Call_GS2("J06", "M2", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0402000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I see............");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("J0402000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Ah, my bad.\nI'll ask you again next time. So...\nlater.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(2, 60, #5);
                Parameter_AddCh1Param(2, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(2, 86, 1);
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
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝? What's up?");
            Voice_PlayVoice("J0402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Are you free on Sunday?");
            Message_MsgSel("Yeah, I am. Why?", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M2", 10);
                System_Call_GS2("J06", "M2", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0402000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Okay. Later then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(2, 60, #5);
                Parameter_AddCh1Param(2, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's Shiba...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Shiba＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Can you make some time for me this\nSunday?");
            Message_MsgSel("Yeah, I'm free. Why?", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M2", 10);
                System_Call_GS2("J06", "M2", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0402000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I see..........");
                Voice_PlayVoice("J0402000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, my bad. I'll call you, again.\nLater.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm, I wonder if that was a bad\nthing to do...)");
                Parameter_AddCh1Param(2, 60, #5);
                Parameter_AddCh1Param(2, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
