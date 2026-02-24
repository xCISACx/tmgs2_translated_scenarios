section "j03_m4_010"{
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
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
            Voice_PlayVoice("J0304010_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. I got your message.\nIt's fine, I'm free that day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?\nThen I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304010_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Got it. Later.... Ah, don't be late.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?");
            Voice_PlayVoice("J0304010_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Got your message.\nDo you wanna...\nno matter what, go out somewhere\nwith me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            Voice_PlayVoice("J0304010_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'd be a pretty cold guy if I were\nto reject you, even though you're\nthat desperate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304010_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay.");
            Voice_PlayVoice("J0304010_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Go do some training so that you\ndon't do things like sleep-in from\nsleeping late at night because\nyou're nervous or something.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?");
            Voice_PlayVoice("J0304010_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sorry, I was listening to a CD and\ndidn't know my phone was ringing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, it's fine.\nSo, about the message I left you...");
            Voice_PlayVoice("J0304010_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Isn't it obvious that it's okay? ...\nDid you think that I'd say no or\nsomething?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then I'll be waiting at the\n｛待ち合わせ場所｝ on\n｛日付｝!");
            Voice_PlayVoice("J0304010_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay....\nMaybe I should do some training so\nthat I won't get nervous on that\nday...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nCan't it be ｛日付｝\nalready...)");
            }
        break ;
        case 1:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
            Voice_PlayVoice("J0304010_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Got your message.\nI can't that day, I'm real busy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304010_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
            Voice_PlayVoice("J0304010_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I got your message.\nDo you wanna...\nno matter what, go out somewhere\nwith me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            Voice_PlayVoice("J0304010_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Thanks for that, but just drop it\nthis time.\nI've got other plans.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304010_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, there are times when things\ndon't go as planned.\nAsk me again some other time.");
            Voice_PlayVoice("J0304010_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 40);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nDid you get my message?");
            Voice_PlayVoice("J0304010_D02100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "......... Sorry!");
            Voice_PlayVoice("J0304010_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I tried to change my plans so that I\ncan go out with you, but I just\ncan't on that day...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304010_D02300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah... this is super depressing......\nAh, ask me again some other time!\nI'll definitely say yes!");
            Voice_PlayVoice("J0304010_D02400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "*Sigh* ... Later...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, that's too bad!)");
            }
        break ;
        case 2:
        SoundEffect_PlaySE(19, 127);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, is this a call from\n｛Hariya＊＊｝?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0304010_D02500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo. I got your message.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
            Voice_PlayVoice("J0304010_D02600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I was in the studio so I switched my\ncellphone off.\nSorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, don't worry about it. So...");
            Voice_PlayVoice("J0304010_D02700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I got work that day so I can't.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Then it can't be helped.");
            Voice_PlayVoice("J0304010_D02800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sorry.\nAh, I got work on Wednesdays and\nFridays.\nRemember it or write it down.");
            Voice_PlayVoice("J0304010_D02900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Every Wednesday and Friday, huh...\nI have to be aware of that the next\ntime I call him.)");
            }
        break ;
        }
    if (Parameter_GetCh1Param(4, 512) == 0){
        Parameter_AddCh1Param(4, 62, #30);
        }
    else if (Parameter_GetCh1Param(4, 512) == 1){
        Parameter_AddCh1Param(4, 62, #45);
        }
    }
