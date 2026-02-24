section "j03_m2_010"{
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
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nDid you get my message?");
            Voice_PlayVoice("J0302010_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. I'm free that day.\nI'll go with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0302010_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝....\nDid you get my message?");
            Voice_PlayVoice("J0302010_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, that's why I called....\nI'm okay with it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0302010_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nDon't go to the wrong place, okay?\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's Shiba.... Are you busy now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No. Did you get my message?");
            Voice_PlayVoice("J0302010_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I did....\nSorry for not calling sooner.");
            Voice_PlayVoice("J0302010_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Thanks for asking me out.\nWhere and when do we meet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0302010_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay....\nIt would be nice if there was nice\nweather then.\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nDid you get my message?");
            Voice_PlayVoice("J0302010_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Voice_PlayVoice("J0302010_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't have the time to go with you\non that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302010_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba.");
            Voice_PlayVoice("J0302010_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "About your message...");
            Message_Who(0);
            Message_MsgDisp("主人公", "You got it?");
            Voice_PlayVoice("J0302010_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nSorry, but I can't that day.\nI'm not free.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302010_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0302010_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's Shiba. Are you free now?");
            Voice_PlayVoice("J0302010_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "About your message...\nI just can't make it on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302010_B02000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It would have been good if I could\npostpone it...\nSorry.");
            Voice_PlayVoice("J0302010_B02100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ask me out again when you have the\nchance.\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Shiba＊＊｝?)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("J0302010_B02200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's Shiba.");
        Voice_PlayVoice("J0302010_B02300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I was in the middle of something....\nSorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's fine. You don't have to worry.\nAbout the message I left you...");
        Voice_PlayVoice("J0302010_B02400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I've got club activities on every\n3rd Sunday, so I just can't go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so... Okay, I understand.\nI'll see you later then.");
        Voice_PlayVoice("J0302010_B02500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI'll take note of that for next\ntime.)");
        break ;
        }
    if (Parameter_GetCh1Param(2, 512) == 0){
        Parameter_AddCh1Param(2, 62, #30);
        }
    else if (Parameter_GetCh1Param(2, 512) == 1){
        Parameter_AddCh1Param(2, 62, #45);
        }
    }
