section "b03_m5_180"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 0, 11);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305180_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Wah, we barely made it on time.\nLet's hurry.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay!");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(5, "NON");
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 2, 2);
    Character_ChFace(1, 3, 1);
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305180_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "We made it～.\nAh, I forgot to buy popcorn for you.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M5", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M5", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M5", 181);
        }
    else if (Date_ChkDateOpen(52) == 1){
        System_Call_GS2("B04", "M5", 182);
        }
    else if (Date_ChkDateOpen(53) == 1){
        System_Call_GS2("B04", "M5", 183);
        }
    else if (Date_ChkDateOpen(54) == 1){
        System_Call_GS2("B04", "M5", 184);
        }
    else if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M5", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M5", 185);
        }
    else if (Date_ChkDateOpen(57) == 1){
        System_Call_GS2("B04", "M5", 186);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M5", 187);
        }
    else if (Date_ChkDateOpen(59) == 1){
        System_Call_GS2("B04", "M5", 188);
        }
    else if (Date_ChkDateOpen(60) == 1){
        System_Call_GS2("B04", "M5", 189);
        }
    }
