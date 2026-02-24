section "b03_m2_170"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Character_ChFace(1, 2, 2);
    Character_ChFace(1, 3, 0);
    if (Date_ChkDateOpen(47) == 1){
        Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(46) == 1){
        Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
        }
    Screen_WipeIn(2);
    Voice_PlayVoice("B0302170_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Singing... Do you like singing?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 170);
    }
