section "b03_m3_180"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303180_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... I am glad we got here early.\nWhere you sit greatly affects your\nimpression of the movie.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(3, "NON");
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE700_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303180_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Alright, this is a good spot.\nIt is not too far, and not too\nclose...");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Ah, it is about to start.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(49) == 1){
        System_Call_GS2("B04", "M3", 181);
        }
    else if (Date_ChkDateOpen(50) == 1){
        System_Call_GS2("B04", "M3", 181);
        }
    else if (Date_ChkDateOpen(51) == 1){
        System_Call_GS2("B04", "M3", 181);
        }
    else if (Date_ChkDateOpen(52) == 1){
        System_Call_GS2("B04", "M3", 182);
        }
    else if (Date_ChkDateOpen(53) == 1){
        System_Call_GS2("B04", "M3", 183);
        }
    else if (Date_ChkDateOpen(54) == 1){
        System_Call_GS2("B04", "M3", 184);
        }
    else if (Date_ChkDateOpen(55) == 1){
        System_Call_GS2("B04", "M3", 185);
        }
    else if (Date_ChkDateOpen(56) == 1){
        System_Call_GS2("B04", "M3", 185);
        }
    else if (Date_ChkDateOpen(57) == 1){
        System_Call_GS2("B04", "M3", 186);
        }
    else if (Date_ChkDateOpen(58) == 1){
        System_Call_GS2("B04", "M3", 187);
        }
    else if (Date_ChkDateOpen(59) == 1){
        System_Call_GS2("B04", "M3", 188);
        }
    else if (Date_ChkDateOpen(60) == 1){
        System_Call_GS2("B04", "M3", 189);
        }
    }
