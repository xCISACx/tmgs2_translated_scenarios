section "j03_m5_010"{
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
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.");
            Voice_PlayVoice("J0305010_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the amazing message.");
            Voice_PlayVoice("J0305010_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That day is fine, I haven't made\nplans with anyone else.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305010_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay, I look forward to it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.");
            Voice_PlayVoice("J0305010_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the message～.\nEven your voice is cute.\nMy heart was thumping as I was\nlistening to the message.");
            Voice_PlayVoice("J0305010_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Anyway, I'm free that day.\nLet's go on a date▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305010_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. I'll see you later, then.\nGoodbye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.\nAre you free to talk right now?");
            Voice_PlayVoice("J0305010_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the amazing message.");
            Voice_PlayVoice("J0305010_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I kinda couldn't believe it, so I\nlistened to it a few times.\nAre you really asking me out?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nI wonder if you're free that day.");
            Voice_PlayVoice("J0305010_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Of course. I'm heaps glad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank gosh.\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0305010_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm heaps happy.\nMy heart is thumping... Now then...\nAh, you hang up first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.\nI'll see you on that day, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.");
            Voice_PlayVoice("J0305010_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the message.");
            Voice_PlayVoice("J0305010_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But I've made plans with another\ncute girl on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0305010_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, sorry. Goodbye～.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.");
            Voice_PlayVoice("J0305010_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks for the message.\nIt's unlucky, but I can't make any\ntime for you that day no matter\nwhat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0305010_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm real sorry.\nJust wait and see and ask me out\nagain.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0305010_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. It's me.\nAre you free to talk right now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it's fine.");
            Voice_PlayVoice("J0305010_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Umm... about your message, I can't.");
            Voice_PlayVoice("J0305010_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I've made plans and it's something\nthat I gotta do.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0305010_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah～, that's really unlucky.\nHeaps unlucky.\nEven though you asked me out...");
            Voice_PlayVoice("J0305010_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm real sorry. Ask me again, okay?\nPromise me, okay?");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Chris＊＊｝?)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("J0305010_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, it's me.");
        Voice_PlayVoice("J0305010_E02600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Thanks for the message.\nBut I have club activities every 3rd\nSunday.");
        Voice_PlayVoice("J0305010_E02700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Any other day would be fine.\nI'd be happy if you remembered.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see. Okay, I understand.");
        Voice_PlayVoice("J0305010_E02800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, I'm real sorry.\nAsk me out, again～.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI'll take note of that next time.)");
        break ;
        }
    if (Parameter_GetCh1Param(5, 512) == 0){
        Parameter_AddCh1Param(5, 62, #30);
        }
    else if (Parameter_GetCh1Param(5, 512) == 1){
        Parameter_AddCh1Param(5, 62, #45);
        }
    }
