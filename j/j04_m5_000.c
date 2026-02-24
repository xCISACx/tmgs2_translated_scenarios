section "j04_m5_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(5, "M5_01F", 0);
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
        Music_PlayBGM(0, "MN_C_05_003_D00", 127, 40);
        if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝, what's up?");
            Voice_PlayVoice("J0405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I know it's sudden, but are you free\nthis Sunday?");
            Message_MsgSel("Yeah, I am.", "I kind of can't, that day...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M5", 0);
                System_Call_GS2("J06", "M5", 0);
                break ;
                case 1:
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("J0405000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I see.\nAre you perhaps seeing someone else?\nI got a late start～!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("J0405000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'll be asking you sooner next time.\nSo please treat me well, then.\nI'll leave now.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(5, 60, #5);
                Parameter_AddCh1Param(5, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Voice_PlayVoice("J0405000_E00300", 5, "J0405000_E00301");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, ｛主人公｝.\nYou got a sec?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝, what's up?");
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("J0405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What's your schedule like this\nSunday?");
            Character_BlinkStart(5, 0, (#1));
            Voice_PlayVoice("J0405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It'd be nice if you were free...\nSo do you wanna go somewhere?");
            Message_MsgSel("Yeah, I'm free.", "I kind of can't, that day...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M5", 0);
                System_Call_GS2("J06", "M5", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0405000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I see～... This is bad～...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("J0405000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It can't be helped!\nYeah, it can't... But...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("J0405000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... That's real bad luck...");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("J0405000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........\nAh, sorry for stopping you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, it's fine.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0405000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I will see you later, then...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Next Sunday...\nHmm, I wonder if that was a bad\nthing to do...)");
                Parameter_AddCh1Param(5, 60, #5);
                Parameter_AddCh1Param(5, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(5, 86, 1);
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
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, it's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? ｛Chris＊＊｝?");
            Voice_PlayVoice("J0405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. Are you free this Sunday?");
            Message_MsgSel("I don't have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M5", 10);
                System_Call_GS2("J06", "M5", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0405000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I see... I'm unhappy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sorry.");
                Voice_PlayVoice("J0405000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No, it's fine.");
                Voice_PlayVoice("J0405000_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Don't worry about it, if you say yes\nnext time I ask you, it will make up\nfor it.");
                Voice_PlayVoice("J0405000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I will see you later, then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(5, 60, #5);
                Parameter_AddCh1Param(5, 62, 5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0405000_E01700", #1, "J0405000_E01701");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, it's me... You got a sec?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝? What's up?");
            Voice_PlayVoice("J0405000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Umm... Are you free this Sunday?");
            Message_MsgSel("I don't have any plans.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M5", 10);
                System_Call_GS2("J06", "M5", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0405000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hello? ｛Chris＊＊｝?");
                Voice_PlayVoice("J0405000_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nIs this Sunday seriously not a good\ntime?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("J0405000_E02100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... What am I saying.\nSorry to trouble you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, it's fine.");
                Voice_PlayVoice("J0405000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Since I'm asking you so suddenly, it\ncan't be helped...\nI'll ask you next time.");
                Voice_PlayVoice("J0405000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Now then, goodbye...");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm, I wonder if that was a bad\nthing to do...)");
                Parameter_AddCh1Param(5, 60, #5);
                Parameter_AddCh1Param(5, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
