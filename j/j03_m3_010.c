section "j03_m3_010"{
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
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.\nI got your message.");
            Voice_PlayVoice("J0303010_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I do not have any plans for that\nday, so I don't mind.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303010_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay.\nThat is probably all you wanted to\nask me.\nI will be hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.\nThank you for the message.");
            Voice_PlayVoice("J0303010_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I still have not made any plans for\nthat day.\nIt is fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303010_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay.\nI will see you on that day, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.\nAre you free to talk right now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it's fine.");
            Voice_PlayVoice("J0303010_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Sorry for not answering the phone\nearlier....\nThank you for the message.\nIt is fine, I can go on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303010_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay, I look forward to it.\nThank you for asking me.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.");
            Voice_PlayVoice("J0303010_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I have received your message, but I\ncannot go on that day.\nI already made plans.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303010_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nThat is probably all you wanted to\nask me.\nI will be hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.");
            Voice_PlayVoice("J0303010_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thank you for the message.\nBut I already made plans for that\nday.\nI am sorry, I must decline.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303010_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes. I will see you later, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0303010_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Hello, it's Hikami.\nAre you free to talk right now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it's fine.");
            Voice_PlayVoice("J0303010_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Sorry for not answering the phone\nearlier....\nThank you for the message.");
            Voice_PlayVoice("J0303010_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... But I apologize.\nI have already made plans for that\nday.\nIt does not seem like I can go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303010_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is unfortunate for me too, as you\nhad asked me out....\nSorry, call me again.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hikami＊＊｝?)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("J0303010_C01900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Hello, it's Hikami.\nI got your message.");
        Voice_PlayVoice("J0303010_C02000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am sorry, I cannot go on that day.\nI have Student Council activities to\ndo.");
        Voice_PlayVoice("J0303010_C02100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I have Student Council activities to\ndo every 3rd Sunday of the month.\nI would be grateful if you\nremembered that fact.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?");
        Voice_PlayVoice("J0303010_C02200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes. Now then, I will be hanging up.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI should take note of that for next\ntime.)");
        break ;
        }
    if (Parameter_GetCh1Param(3, 512) == 0){
        Parameter_AddCh1Param(3, 62, #30);
        }
    else if (Parameter_GetCh1Param(3, 512) == 1){
        Parameter_AddCh1Param(3, 62, #45);
        }
    }
