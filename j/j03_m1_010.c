section "j03_m1_010"{
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
        System_Wait(#300);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello.");
            Voice_PlayVoice("J0301010_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I got your message....\nWhat are you planning?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I don't have a p-plan or anything...\nI was just wondering.");
            Voice_PlayVoice("J0301010_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0301010_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello? It's me, Saeki.");
            Voice_PlayVoice("J0301010_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I got your message.\nYou're really puzzling... So?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes?");
            Voice_PlayVoice("J0301010_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm asking about where and when we\nmeet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, right.\nThen I'll see you at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0301010_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.... Don't be late, okay?");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello? ... Ah, it's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝!\nDid you get my message?\nHow about it?");
            Voice_PlayVoice("J0301010_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, uhh... Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen we'll meet at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0301010_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it. I'll be waiting. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        System_Wait(#300);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello.");
            Voice_PlayVoice("J0301010_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I got your message.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes! So...");
            Voice_PlayVoice("J0301010_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm not going. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello? It's me, Saeki.");
            Voice_PlayVoice("J0301010_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I got your message. I'll pass.\nI'm really busy that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0301010_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sorry. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0301010_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hello? ... Ah, it's me.");
            Voice_PlayVoice("J0301010_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm sorry. I was out.");
            Voice_PlayVoice("J0301010_A01900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So... I got your message.\nSorry, I can't go on that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0301010_A02000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sorry.\nI should have told you earlier.");
            Voice_PlayVoice("J0301010_A02100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Call me again. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        SoundEffect_PlaySE(19, 127);
        System_Wait(#300);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Saeki＊＊｝?)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("J0301010_A02200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hello. I got your message.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, yes. So about that message...");
        Voice_PlayVoice("J0301010_A02300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... I can't.\nI work at Sangosho every Wednesday\nand Friday.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?");
        Voice_PlayVoice("J0301010_A02400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.... I'm hanging up, okay?");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wednesdays and Fridays...\nI'll take note of that next time.)");
        break ;
        }
    if (Parameter_GetCh1Param(1, 512) == 0){
        Parameter_AddCh1Param(1, 62, #30);
        }
    else if (Parameter_GetCh1Param(1, 512) == 1){
        Parameter_AddCh1Param(1, 62, #45);
        }
    }
