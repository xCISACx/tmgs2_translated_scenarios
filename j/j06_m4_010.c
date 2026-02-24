section "j06_m4_010"{
    Message_MsgSel("Yeah, I wanna go!", "Uhh... um, sorry.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("J0604010_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... *Sigh*...... What a relief...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
        Voice_PlayVoice("J0604010_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Ah, my bad!\nI feel a little more relaxed now...\nnot! Ah, no, it's nothing!");
        Message_Who(0);
        Message_MsgDisp("主人公", "R-Really?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
        Voice_PlayVoice("J0604010_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay. I look forward to it...\nNo, I mean, you should look forward\nto it!\nLater!!");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Haha.\n｛Hariya＊＊｝ asked me out\non a date!)");
        Date_SetNextSandayDateEvent(4);
        break ;
        case 1:
        Voice_PlayVoice("J0604010_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Seriously!? ...\nI guess you don't know.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Voice_PlayVoice("J0604010_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Don't say that...\nBe free next time! Later!");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(4, 60, #5);
        Parameter_AddCh1Param(4, 62, 5);
        break ;
        }
    }
