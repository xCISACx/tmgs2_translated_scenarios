section "b03_m1_180"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 2);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301180_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I might fall asleep...\nIf I do, don't do anything to\ndisturb me.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "NON");
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 2);
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301180_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I'm taking the middle seat.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.");
    Voice_PlayVoice("B0301180_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Oh, it's starting.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M1", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M1", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M1", 181);
        }
    else if (Date_ChkDateOpen(52) == 1){
        System_Call_GS2("B04", "M1", 182);
        }
    else if (Date_ChkDateOpen(53) == 1){
        System_Call_GS2("B04", "M1", 183);
        }
    else if (Date_ChkDateOpen(54) == 1){
        System_Call_GS2("B04", "M1", 184);
        }
    else if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M1", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M1", 185);
        }
    else if (Date_ChkDateOpen(57) == 1){
        System_Call_GS2("B04", "M1", 186);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M1", 187);
        }
    else if (Date_ChkDateOpen(59) == 1){
        System_Call_GS2("B04", "M1", 188);
        }
    else if (Date_ChkDateOpen(60) == 1){
        System_Call_GS2("B04", "M1", 189);
        }
    Character_Chara_GS2(1, "NON");
    }
