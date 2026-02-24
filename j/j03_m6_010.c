section "j03_m6_010"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    switch (Date_Date_Check()){
        case 0:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's Amachi.");
            Voice_PlayVoice("J0306010_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I got your message.\nI am free that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306010_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay. I look forward to it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, Senpai?\nSorry that I couldn't answer the\nphone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, I'm fine with that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306010_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's me.\nSorry for having you call me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, let's go hang out!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0306010_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay! I'm looking forward to it!!\n... Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's Amachi.");
            Voice_PlayVoice("J0306010_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I got your message.\nI'm sorry, I can't make it that\nday...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry to turn you down...\neven though you had invited me\nout...\nI will hang up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, Senpai?\nSorry that I couldn't answer the\nphone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry, I can't make it on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ask me again some other time. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's me.\nSorry for having to have you call\nme.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry...\nI can't make it on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F01700", #1, "");
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
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's Amachi.");
            Voice_PlayVoice("J0306010_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I got your message.\nSorry, I have practice that day for\nthe Cheer Squad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry to turn you down...\neven though you had invited me out.\nI will hang up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello, Senpai?\nSorry I couldn't answer the phone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's the 3rd Sunday of the month,\nright?\nI'm sorry, I have club activities\nthat day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I can't skip it as well.\nAsk me again another time. Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Amachi＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0306010_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, Senpai? It's me.\nSorry for having you call me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nSo, about my message...");
            Voice_PlayVoice("J0306010_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Sorry... I can't that day.\nIt's the 3rd Sunday of the month,\nright?\nI have club activities that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0306010_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If it were another day, I could make\ntime for you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine. Don't worry about it.\nI will see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
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
