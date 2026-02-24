section "q34_g2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(11, "G2_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Tomorrow will be the end.");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Q1211000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "It went by so fast...\nI wonder why time passes by quicker\nwhen you are having fun.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Q1211000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Someday...\nWould you like to go on a trip like\nthis?\nJust the two of us?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah! Let's go on one, someday!");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 60, 6);
    }
