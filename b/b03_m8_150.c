section "b03_m8_150"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Character_BlinkStart(8, 2, (#1), 2);
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
    Voice_PlayVoice("B0308150_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Good. I aim for perfection!");
    Character_BlinkStart(8, 3, (#1), 2);
    Character_ChFace(1, 7, 0);
    Voice_PlayVoice("B0308150_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hahaha.\nAs a member of Hanegasaki, I will\nshow you my skills!");
    Message_ResumeSkinship();
    Character_ChFace(1, 2, 1);
    Character_BlinkStart(8, 2, (#1), 2);
    Character_ChFace(1, 3, 3);
    Voice_PlayVoice("B0308150_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Don't get knocked over with the pins\nout of surprise, okay～?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 151);
    }
