section "j03_m5_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("J0305000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That day is fine.\nSo let's go all out and have a lot\nof fun then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Goodbye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            if (System_GlobalWork(23, 1) == 5){
                Voice_PlayVoice("FD_05_160_00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right.\nYou'll get tired if you don't\noccasionally get a breather.");
                Voice_PlayVoice("FD_05_160_00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's go, then.");
                }
            else {
                Voice_PlayVoice("J0305000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "This is a present from God.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                }
            Voice_PlayVoice("J0305000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "My schedule is free on that day.\nHow lucky, you and me both.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay～. I look forward to it～.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Voice_PlayVoice("J0305000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even just getting a call from you\nmakes me happy.\nWhat are you trying to do to me by\nmaking me this happy?");
            Voice_PlayVoice("J0305000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Of course it's okay.\nI'll be yours for the entire day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Uhh.... You hang up first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. I'll see you later, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Voice_PlayVoice("J0305000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is bad...\nI've got plans with another cute\ngirl that day...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see...");
            Voice_PlayVoice("J0305000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sorry. Next time. Goodbye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Voice_PlayVoice("J0305000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... God is so mean...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Voice_PlayVoice("J0305000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I've got plans that day, stuff that\nI gotta do no matter what...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0305000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's seriously bad luck... Sorry.\nWe'll go somewhere next time.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Voice_PlayVoice("J0305000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... That day... is a bad day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped.\nNow then...");
            Voice_PlayVoice("J0305000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ahh, wait a sec!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yes.");
            Voice_PlayVoice("J0305000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "............ Crap～.\nAs expected, I can't make it on that\nday～...");
            Voice_PlayVoice("J0305000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll make some time for you next\ntime, so ask me, again...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure.");
            Voice_PlayVoice("J0305000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you really gonna ask me again?\nPromise me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I promise.\nNow then, I'll see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        Voice_PlayVoice("J0305000_E01800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Uh-oh, I can't.\nI have club activities every 3rd\nSunday.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, is that so?");
        Voice_PlayVoice("J0305000_E01900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI'd be happy if you remembered that.\nAsk me, again～.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI have to be aware of that the next\ntime I call him.)");
        break ;
        }
    if (Parameter_GetCh1Param(5, 512) == 0){
        Parameter_AddCh1Param(5, 62, #30);
        }
    else if (Parameter_GetCh1Param(5, 512) == 1){
        Parameter_AddCh1Param(5, 62, #45);
        }
    }
