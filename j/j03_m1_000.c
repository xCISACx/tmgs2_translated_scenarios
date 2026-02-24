section "j03_m1_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("J0301000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me and you? ... Why?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? There's no specific reason...");
            Voice_PlayVoice("J0301000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Well, it's fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll see you at the\n｛待ち合わせ場所｝ on\n｛日付｝.");
            Voice_PlayVoice("J0301000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("J0301000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...... I'm actually curious.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Voice_PlayVoice("J0301000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.... What are you scheming?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm not s-scheming anything!");
            if (System_GlobalWork(23, 1) == 1){
                Voice_PlayVoice("FD_01_160_00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's fine.\nI'll tag along with you if it's a\nrehearsal.\nI'm also quite curious.");
                }
            else {
                Voice_PlayVoice("J0301000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it's fine.\nWhere and when do we meet?");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Is it alright if we meet at the\n｛待ち合わせ場所｝ on\n｛日付｝?");
            Voice_PlayVoice("J0301000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.\nIf you're late, I'll give you a\nchop.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Voice_PlayVoice("J0301000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0301000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "So?\nWhat do you need,\n｛Saeki＊＊｝?");
            Voice_PlayVoice("J0301000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm? ... Ah, don't worry about it.\nLater.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'll see you later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("J0301000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No. I'm not interested.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see...");
            Voice_PlayVoice("J0301000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Voice_PlayVoice("J0301000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah... I'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh...");
            Voice_PlayVoice("J0301000_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sorry, I don't want to....\nI'm hanging up, okay?");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Voice_PlayVoice("J0301000_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I also wanted to talk about that\nparticular day.\nI can't go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so...");
            Voice_PlayVoice("J0301000_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sorry....\nI should have told you that first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's fine, it can't be helped.");
            Voice_PlayVoice("J0301000_A01900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, let's go somewhere again, okay?\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        Voice_PlayVoice("J0301000_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I can't.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh...");
        Voice_PlayVoice("J0301000_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... I can't.\nI work at Sangosho on Wednesdays and\nFridays.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?\nThen I guess it can't be helped.");
        Voice_PlayVoice("J0301000_A02200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's how it is....\nWe'll go somewhere next time.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Right, Sangosho...\nI have to be aware of that the next\ntime I call him.)");
        break ;
        }
    if (Parameter_GetCh1Param(1, 512) == 0){
        Parameter_AddCh1Param(1, 62, #30);
        }
    else if (Parameter_GetCh1Param(1, 512) == 1){
        Parameter_AddCh1Param(1, 62, #45);
        }
    }
