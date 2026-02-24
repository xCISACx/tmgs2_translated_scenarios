section "j06_m1_010"{
    Message_MsgSel("Yeah, let's go!", "Uhh... Sorry.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("J0601010_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay, it's decided then.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
        Voice_PlayVoice("J0601010_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay. Don't sleep in, okay? Later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ asked me out\non a date!)");
        Date_SetNextSandayDateEvent(1);
        break ;
        case 1:
        Voice_PlayVoice("J0601010_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see... Well, next time then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(1, 60, #5);
        Parameter_AddCh1Param(1, 62, 5);
        break ;
        }
    }
