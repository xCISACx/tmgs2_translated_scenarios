section "q25_g4_000"{
    System_Wait(60);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(13, "G4_08F", 0);
    Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Mizushima＊＊｝!?");
    Character_ChFace(0, 0, 11);
    Voice_PlayVoice("Q2613000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "What's wrong?\nYou seem so surprised...");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(13, 3, (#1));
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("Q2613000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Oh, on top of that...\nDid you confuse me with a certain\nsomeone?\nHow sad.\n*Giggles*▼");
    Character_Chara_GS2(13, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "(So that was\n｛Mizushima＊＊｝...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
