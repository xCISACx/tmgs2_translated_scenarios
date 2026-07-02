section "s12_m1_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.\nSo that's it for the shrine visit?");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S1201000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, I'm tired.");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This year will be a good year...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, I wanted to pray for business\nprosperity...\nKind of like this.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S1201000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... It's cold! Let's head out!");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("S1201000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't mention it.... It's cold! Bye.");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good year...)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "*Phew*...\nThe crowd of people finally\ndispersed.\nI'm tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝, did you\nmanage to buy a hamaya?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1201000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Somehow.\nIt's just a good luck charm for the\ntime being.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're quite old-fashioned, aren't\nyou, ｛Saeki＊＊｝?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1201000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... I am?\nAh, I get most of my secondhand\nknowledge from my grandfather.\nSame with this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is the\ngrandchild of his grandfather, after\nall.)");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("S1201000_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't mention it.... Hey?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes?");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1201000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Make sure this year is a good year,\nokay?\nSee you later.");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good year...)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well...\nThis year's shrine visit as ended\nsuccessfully.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1201000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... It's cold! Time to break up!");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This year will be a good year...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, I prayed for business\nprosperity...\nHey, what did you pray to God for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's a secret!");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("S1201000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Why try to hide it... Tell me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well, gotta go!");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S1201000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, wait!");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("S1201000_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't mention it....\nNow, that prayer?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good year...)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm tired.\nNo matter how often I'm around them,\nI am not used to crowds.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you for today.\nWere you able to buy a hamaya?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1201000_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well.\nAside from that, what did you pray\nto God for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!? ... That's a secret.\nAnd you, ｛Saeki＊＊｝?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1201000_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me!? Well, I, eh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, did you pray for something other\nthan a prosperous business?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S1201000_A01900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A prosperous business? ...\nI have to go!\nI forgot to pray for that!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Saeki＊＊｝\nprayed for...?)");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("S1201000_A02000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't mention it.\nWithout you, I would have forgot to\npray for a prosperous business.");
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles* That's true.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("S1201000_A02100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, I forgot we were at your\nhouse...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1201000_A02200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, it's nothing...\nLet's try to make this year a good\nyear.\nSee you later.");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good one...)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A02300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Graduation is pretty soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're right.\nDid you enjoy the last three years,\n｛Saeki＊＊｝?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S1201000_A02400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "How would I know...\nI don't know whether or not they\nwere good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A02500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Graduation is pretty soon...");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're right.\nDid you enjoy the last three years,\n｛Saeki＊＊｝?");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1201000_A02600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I don't know. I guess it was good.\nTo be honest, I've had my mind too\nbusy focusing on what to do in the\nfuture.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1201000_A02700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't mention it....\nWell, time for me to go home, huh?");
                Character_Chara_GS2(1, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though ｛Saeki＊＊｝\nlaughed, he's not very cheerful...)");
                }
            }
        else {
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(1, "M1_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1201000_A02800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "This is the last New Year's shrine visit\nof our high school days...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nA lot has happened, hasn't it?");
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1201000_A02900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, seriously... It went by in the blink\nof an eye.\nHey...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S1201000_A03000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I was always so wrapped up in the shop,\nsorry about that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's okay.\nIt couldn't be helped.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1201000_A03100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Thank you. \nBut... I'm still sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝...?)");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_Chara_GS2(1, "M1_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1201000_A03200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's fine, I wanted to.\n...Hey, I tried asking the gods\nfor something.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What was it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("S1201000_A03300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That I could stay true to myself and \nnot hurt anyone in the process.\nI asked if, somehow... both wishes\ncould come true.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝?");
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1201000_A03400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "And I made one more wish,\nthat this year will be a great one for you.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1201000_A03500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I really did pray for that... \nDo you believe me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... I'll pray for you too, okay? \nI hope this year is amazing for you,\n｛Saeki＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1201000_A03600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Thanks.... See ya.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems worried\nabout something...)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M1", 10);
        System_Call_GS2("K02", "M1", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(1, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
