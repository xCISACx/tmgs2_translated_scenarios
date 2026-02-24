section "j03_m2_000"{
    switch (Date_Date_Check()){
        case 0:
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("J0302000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI'll tag along with you because I'm\nfree that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0302000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Got it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("J0302000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, it's fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            if (System_GlobalWork(23, 1) == 2){
                Voice_PlayVoice("FD_02_160_00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's do it so it's as if you were\nmeeting who you really like....\nDon't be late.");
                }
            else {
                Voice_PlayVoice("J0302000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Don't be late.");
                }
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Voice_PlayVoice("J0302000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm free that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0302000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay. Be careful on your way there.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("J0302000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I can't.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm hanging up.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("J0302000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That day...\nIt doesn't seem like I'll be able to\nget some time off that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "My bad. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        else {
            Voice_PlayVoice("J0302000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Sorry. I've got plans.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped then.");
            Voice_PlayVoice("J0302000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Call me again when you have the\nchance....\nLater.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad...)");
            }
        break ;
        case 2:
        Voice_PlayVoice("J0302000_B01200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I've got club activities every 3rd\nSunday....\nSo I can't.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, is that so...");
        Voice_PlayVoice("J0302000_B01300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Sorry.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Every 3rd Sunday...\nI have to be aware of that the next\ntime I call him.)");
        break ;
        }
    if (Parameter_GetCh1Param(2, 512) == 0){
        Parameter_AddCh1Param(2, 62, #30);
        }
    else if (Parameter_GetCh1Param(2, 512) == 1){
        Parameter_AddCh1Param(2, 62, #45);
        }
    }
