section "b03_m6_250"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Character_BlinkStart(6, 2, (#1), 2);
    Character_ChFace(1, 3, 3);
    Background_Bg_GS2("BG_BH160_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0306250_F00000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "... I'm a little nervous...\nPlease come in.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Sorry for intruding on you.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 250);
    }
