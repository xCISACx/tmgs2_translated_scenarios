section "j06_m1_000"{
    Message_MsgSel("Yeah, let's go!", "Uhh... Sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0601000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay, it's decided then.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0601000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay. Don't sleep in, okay? Later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ asked me out\non a date!)");
        Date_SetNextSandayDateEvent(1);
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("J0601000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see... Well, next time then.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(1, 60, #5);
        Parameter_AddCh1Param(1, 62, 5);
        break ;
        }
    }
