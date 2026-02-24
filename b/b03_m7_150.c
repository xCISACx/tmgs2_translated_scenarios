section "b03_m7_150"{
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 5);
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
    Message_PauseSkinship();
    Voice_PlayVoice("", 7, "B0307150_G00000");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝, do you want\nto try darts?");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, that sounds good.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M7", 152);
    }
