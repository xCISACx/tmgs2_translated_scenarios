section "b03_m4_170"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(1, 2, 1);
    Character_ChFace(1, 3, 3);
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
    Voice_PlayVoice("B0304170_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Do you want to listen to my\nmelodious voice...?\nIt'd be special to me to have you\nlisten.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 170);
    }
