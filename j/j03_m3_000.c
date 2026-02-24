section "j03_m3_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Voice_PlayVoice("J0303000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I don't have any other plans, so I\ndon't mind.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay.\nThat is probably all you wanted to\nask me.\nI will be hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            if (System_GlobalWork(23, 1) == 3){
                Voice_PlayVoice("FD_03_160_00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Date practice?\nIf you are fine with me, I will help\nyou out, by all means.");
                }
            else {
                Voice_PlayVoice("J0303000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I still have not made plans for that\nday.\nIt is fine.");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay. Until that day, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank goodness!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Voice_PlayVoice("J0303000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Let me see my plans for that day...\nAlright, I am free that day.\nI can go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Great!\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0303000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay, I look forward to it.\nThank you for asking me.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Voice_PlayVoice("J0303000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Not on that day.\nI have plans for that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah.\nThat is probably all you wanted to\nask me.\nI will be hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Voice_PlayVoice("J0303000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I apologize, but I must turn that\noffer down.\nI have already made plans.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes. I will see you later, then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Voice_PlayVoice("J0303000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Let me see my plans for that day...\nAh, I have plans....\nHmm, I cannot change those plans.");
            Voice_PlayVoice("J0303000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I apologize, I cannot go this time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0303000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is unfortunate for me too, as you\nhad asked me out.\nSorry, but be sure to ask me again\nwhen you have the chance.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        Voice_PlayVoice("J0303000_C01300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Is that not the 3rd Sunday of the\nmonth?\nI am sorry, I cannot go on that day.");
        Voice_PlayVoice("J0303000_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I have Student Council activities to\ndo on the 3rd Sunday of every month.\nI would be grateful if you\nremembered that fact.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, is that so?");
        Voice_PlayVoice("J0303000_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes. I will hang up, now.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI have to be aware of that the next\ntime I call him.)");
        break ;
        }
    if (Parameter_GetCh1Param(3, 512) == 0){
        Parameter_AddCh1Param(3, 62, #30);
        }
    else if (Parameter_GetCh1Param(3, 512) == 1){
        Parameter_AddCh1Param(3, 62, #45);
        }
    }
