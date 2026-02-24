section "j06_m5_010"{
    Message_MsgSel("Sure, definitely!", "Uhh, umm... sorry.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("J0605010_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Lucky. It's decided, then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Voice_PlayVoice("J0605010_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, that's fine.\nLet's make it a day to remember.");
            Voice_PlayVoice("J0605010_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I will see you on Sunday～.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ asked me out\non a date!)");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Voice_PlayVoice("J0605010_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thank gosh. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Voice_PlayVoice("J0605010_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nI'm really looking forward to it.");
            Voice_PlayVoice("J0605010_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nLet's make it an unforgettable day.\nOkay?");
            Voice_PlayVoice("J0605010_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I will see you on Sunday～.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ asked me out\non a date!)");
            }
        Date_SetNextSandayDateEvent(5);
        break ;
        case 1:
        if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("J0605010_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I see.\nWas I too late in asking you out?\nI'll learn from this...");
            Voice_PlayVoice("J0605010_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But it can't be helped.\nI'll ask you out again～.\nGood bye～");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Voice_PlayVoice("J0605010_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I see, it was my bad.");
            Voice_PlayVoice("J0605010_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Yeah, I was late in asking...\nIt can't be helped...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry...");
            Voice_PlayVoice("J0605010_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, no, you're wrong!");
            Voice_PlayVoice("J0605010_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well it's not like things aren't\ncompletely wrong...");
            Voice_PlayVoice("J0605010_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "No, it's not your fault, so you\ndon't have to worry about it...");
            Voice_PlayVoice("J0605010_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll ask you out again, okay? Bye...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            }
        Parameter_AddCh1Param(5, 60, #5);
        Parameter_AddCh1Param(5, 62, 5);
        break ;
        }
    }
