section "q21_g4_000"{
    SoundEffect_PlayStream(2, "SE_GAYA_MAKURA_FAR");
    Background_Bg_GS2("BG_SCB10_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(It seems like this large room is\nbustling with boys...)");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(13, "G4_08F", 0);
    Voice_PlayVoice("", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
    Character_ChFace(0, 0, 11);
    Voice_PlayVoice("Q2113000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Do you hear this?\nThe boys' room is terrible.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, it's a really big commotion.\nWhat are you doing here?");
    Character_ChFace(0, 0, 0);
    Character_BlinkStart(13, 2, (#1));
    Voice_PlayVoice("Q2113000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Hey, let's go and watch what they're\ndoing for a moment.");
    Message_MsgSel("Let's go!", "We should go...");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("Q2113000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Let's go. We'll participate, too...\nUmm, unless they stop.");
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q2113000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "So... I'll pass for now.\nWe'll go to their room later, right?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, bye.");
        System_GlobalWork(7, 2, 1);
        break ;
        }
    SoundEffect_StopStream(2, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
