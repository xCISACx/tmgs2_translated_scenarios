section "s06_s1_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(14, "S1_04F", 0);
    Voice_PlayVoice("S0614000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Here I am, I've arrived.\nAre you ready?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, yeah, just give me a minute.");
    if (Parameter_ChkPlayer(16) == 1){
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0614000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "... That kimono. It's pretty.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Thank you.");
        }
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(14, 2, (#1));
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("S0614000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Ehehe, well, let's go!");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
