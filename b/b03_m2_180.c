section "b03_m2_180"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0302180_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "It seems like we made it just in\ntime..........");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(2, "NON");
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah!\nWhat is it, ｛Shiba＊＊｝?\nYou suddenly pulled my arm...");
    Character_ChFace(1, 2, 5);
    Character_ChFace(1, 3, 3);
    Voice_PlayVoice("B0302180_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nIt's easier to see from these seats.");
    Message_Who(0);
    Message_MsgDisp("主人公", "T...Thanks.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M2", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M2", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M2", 181);
        }
    else if (Date_ChkDateOpen(52) == 1){
        System_Call_GS2("B04", "M2", 182);
        }
    else if (Date_ChkDateOpen(53) == 1){
        System_Call_GS2("B04", "M2", 183);
        }
    else if (Date_ChkDateOpen(54) == 1){
        System_Call_GS2("B04", "M2", 184);
        }
    else if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M2", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M2", 185);
        }
    else if (Date_ChkDateOpen(57) == 1){
        System_Call_GS2("B04", "M2", 186);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M2", 187);
        }
    else if (Date_ChkDateOpen(59) == 1){
        System_Call_GS2("B04", "M2", 188);
        }
    else if (Date_ChkDateOpen(60) == 1){
        System_Call_GS2("B04", "M2", 189);
        }
    }
