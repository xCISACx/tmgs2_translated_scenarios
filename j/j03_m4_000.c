section "j03_m4_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("J0304000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, I happen to be free that day.\nI don't mind going out somewhere.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't be late.\nIf you're late, you're fired.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...?)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            if (System_GlobalWork(23, 1) == 4){
                Voice_PlayVoice("FD_04_160_00000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh? With me?\nAren't you asking the wrong person?");
                Voice_PlayVoice("FD_04_160_00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ah... it's a date rehearsal, right?\nI guess I gotta go out with you.\nThink of a way to thank me.");
                }
            else {
                Voice_PlayVoice("J0304000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Haha, I guess I gotta go, then.\nIf you ask like that, I gotta go\nalong with you.");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright, later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Voice_PlayVoice("J0304000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll go....\nI mean, it's not like I'm not gonna\ngo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright. I look forward to it...\nnot! You look forward to it!");
            Voice_PlayVoice("J0304000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("J0304000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I can't. I'm real busy that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Voice_PlayVoice("J0304000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Bad timing. I've got plans that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't let this get you down, ask me\nagain some other time.\nLater!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Voice_PlayVoice("J0304000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Why that day?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh.");
            Voice_PlayVoice("J0304000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Your timing seriously sucks!");
            Voice_PlayVoice("J0304000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... No. Actually, my timing sucks.\n*Sigh* ... I'm gonna go sleep.\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        break ;
        case 2:
        Voice_PlayVoice("J0304000_D01400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah, I got work that day. I can't.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so? Then it can't be helped.");
        Voice_PlayVoice("J0304000_D01500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Sorry.\nAsk me again some other time... Ah.");
        Voice_PlayVoice("J0304000_D01600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wednesdays and Fridays are no good.\nRemember it!");
        Voice_PlayVoice("J0304000_D01700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every Wednesday and Friday, huh...\nI have to be aware of that the next\ntime I call him.)");
        break ;
        }
    if (Parameter_GetCh1Param(4, 512) == 0){
        Parameter_AddCh1Param(4, 62, #30);
        }
    else if (Parameter_GetCh1Param(4, 512) == 1){
        Parameter_AddCh1Param(4, 62, #45);
        }
    }
