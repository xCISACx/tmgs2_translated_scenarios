section "j04_m3_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(3, "M3_01F", 0);
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
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Voice_PlayVoice("J0403000_C00000", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝, what's up?");
            Voice_PlayVoice("J0403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "U-Umm...\nAre you free this coming day off?\n... I mean, this Sunday.");
            Message_MsgSel("Yeah, I'm free.", "I'm kind of busy that day...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M3", 0);
                System_Call_GS2("J06", "M3", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0403000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see, that is unfortunate......\nI mean you have plans, too.\nI understand.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("J0403000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am sorry for stopping you....\nI will leave now.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(3, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Is there something happening this\nSunday?)");
                Parameter_AddCh1Param(3, 60, #5);
                Parameter_AddCh1Param(3, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(3, 86, 1);
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
        if (Parameter_GetCh1Param(3, 130) >= 4){
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.\nAre you free to talk right now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYeah, it's fine. What's up?");
            Voice_PlayVoice("J0403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "U-Umm... Are you free this weekend?");
            Voice_PlayVoice("J0403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, not the weekend, I mean the\nstart?\nHmm............ I mean this Sunday.");
            Message_MsgSel("I don't have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M3", 10);
                System_Call_GS2("J06", "M3", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0403000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see, that is unfortunate......\nI understand.\nExcuse me for calling you all of a\nsudden.");
                Voice_PlayVoice("J0403000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Please don't worry about it.\nI will see you later.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(3, 60, #5);
                Parameter_AddCh1Param(3, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
