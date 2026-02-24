section "j03_m6_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("J0306000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please wait a moment....\nUhh, I am free that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, I understand.\nI am looking forward to it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready?...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            if (System_GlobalWork(23, 1) == 6){
                Voice_PlayVoice("FD_06_160_00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's fine.\nWe should do it as if you were\ndating the person that you actually\nlike.");
                Voice_PlayVoice("FD_06_160_00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If we don't do that, then it won't\nbe a practice date.");
                }
            else {
                Voice_PlayVoice("J0306000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay. It's fine by me.");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Got it. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready?...)");
            }
        else {
            Voice_PlayVoice("J0306000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, sure! Let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay! I'm looking forward to it!!\n... Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready?...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("J0306000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please wait a moment....\nUhh, sorry, I can't make it on that\nday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped.");
            Voice_PlayVoice("J0306000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry to turn you down...\neven though you invited me out.\nI will hang up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("J0306000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, not on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry. Ask me again later. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Voice_PlayVoice("J0306000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... I can't on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry...\nI really want to hang out with you,\ntoo...");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nI'll see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        break ;
        case 2:
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("J0306000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry.\nI have club activities every 3rd\nSunday...\nI practice for the Cheer Squad on\nthat day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry to turn you down...\neven though you invited me out.\nI will see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("J0306000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's the 3rd Sunday of the month,\nright?\nIf it is, I can't go.\nI've got club activities.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry. I can't skip it either.\nAsk me again. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Voice_PlayVoice("J0306000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... I have practice that day.\nHaven't I told you?\nI have club activities every 3rd\nSunday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry...\nIf it was another day, I'd be able\nto make time for you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nI'll see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        }
    if (Parameter_GetCh1Param(6, 512) == 0){
        Parameter_AddCh1Param(6, 62, #30);
        }
    else if (Parameter_GetCh1Param(6, 512) == 1){
        Parameter_AddCh1Param(6, 62, #45);
        }
    }
