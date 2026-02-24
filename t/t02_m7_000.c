section "t02_m7_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(7, 559) >= 6){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("？？？", "｛主人公｝.");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Music_PlayBGM(0, "MN_C_07_090_D00", 127, 40);
        Still_Pair_Event("EV_07_14", "EV_99_00", 0, 0);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!!\nWhy are you here...?");
        Voice_PlayVoice("T9907000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I know you, because I am a teacher.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Were you waiting for me?");
        }
    else {
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_07_14", "EV_99_00", 0, 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_07_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!!");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0207000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, I have found you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Why are you here?");
        Still_StillFace(0, 0, 6);
        Voice_PlayVoice("T0207000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I know everything about students,\nbecause I am a teacher.\nDid you forget that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I didn't forget...\nBut did you come here to see me?");
        }
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0207000_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Yes.\nThere is something that I would like\nfor you to know.\nAnd something I wish for you to\nteach me.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Something that I will teach you?");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0207000_G00300", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Yes, before you graduate.");
    Still_Pair_Event("EV_07_15", "EV_99_00", 1, 1);
    Voice_PlayVoice("T0207000_G00400", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I have had a unique way with\ncalculations, so I worked at a\nresearch company in America when I\nwas 13.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Then the rumors about you being a\ngenius scientist must be true...");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0207000_G00500", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Back then, I had thought so, too....\nBut thinking about it now, I was\nlike a calculator.");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0207000_G00600", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "From morning to night, all I did was\nperform calculations without knowing\nwhat it would be used for.");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0207000_G00700", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Before long, a lot of people began\nfighting over this talent...\nI had lost all hope for humanity.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0207000_G00800", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I quit and returned to Japan, and\nwent from place to place.\nIt was because I was entirely\ndisinterested.");
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0207000_G00900", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It is because I had thought that if\nI lost any more faith, my heart\nwould break.");
    Message_Who(0);
    Message_MsgDisp("主人公", "No way...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0207000_G01000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Yes... I was an awful person.\nAll I thought about was that it\nwould be better if it all ended\nsoon.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
    Still_Pair_Event("EV_07_14", "EV_99_00", 0, 0);
    Voice_PlayVoice("T0207000_G01100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "But ever since I met you, everything\nbegan to change.\nIt is because you taught me many\nthings.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I taught you things,\n｛Wakaouji＊＊｝?");
    Still_StillFace(0, 0, 3);
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0207000_G01200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Yes.\nWhen it was Spring, the same warm\nwind was blowing on us.\nWe both shed our sweat in Summer.");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0207000_G01300", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "You hear lovely sounds while taking\nwalks in Fall.\nIn Winter, I learned of the warmth\nof another human.");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0207000_G01400", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Above all, apart from the fact that\nI am human, I learned that I cannot\nlive without loving people.");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0207000_G01500", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "After learning such an obvious\nthing, I began to think that my life\nwas not so bad.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
    Still_StillFace(0, 0, 5);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0207000_G01600", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "You are younger than me, and my\nnumber one student, yet you taught\nme that my life has a meaning.");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0207000_G01700", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I am here.\nI will not run away anymore, because\nI have found an irreplaceable\nperson.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
    Still_Pair_Event("EV_99_00", "EV_07_14", 0, 0);
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0207000_G01800", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I love you.\nThat is why I want to know your\nfeelings.");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("I do too, ｛Wakaouji＊＊｝...", "(Answer with a kiss.)", "I'm sorry...");
    switch (Message_TextSelect()){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 2;
        break ;
        case 2:
        var0 = 1;
        break ;
        }
    if (var0 == 2){
        Still_Approach(7, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T9907000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "A kiss...\nDoes that mean that those are your\nfeelings?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9907000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "My heart was racing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Did I express my feelings?");
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T9907000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hm? Hey... What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I had always planned to express my\nfeelings this way.");
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9907000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Right.\nI've known your feelings for a long\ntime now.");
            }
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0207000_G01900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes...\nSo from now on, let us both love\neach other.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0207000_G02000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am not your teacher anymore... Ah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0207000_G02100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I forgot. Uhh...\nCongratulations on graduating.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, yes! Thank you very much.");
        Still_StillFace(0, 0, 1);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0207000_G02200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... I feel a little strange.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Me too...");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0207000_G02300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is fine.\nIt might take time, but we can\nsurely make this work.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        if (var0 != 0){
            Voice_PlayVoice("", 7, "T9907000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nThis is a continuation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "A continuation?");
            Still_StillFace(0, 0, 0);
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T9907000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nThere is something else that I want\nto express.");
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T9907000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It has the same feeling as what you\nconveyed to me...\nWill you close your eyes?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, umm...");
            Voice_PlayVoice("T9907000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I think that this is the same as\nthat time.\nI want to kiss you...");
            }
        else {
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T0207000_G02400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Are you perhaps nervous?");
            Message_Who(0);
            Message_MsgDisp("主人公", "A little...");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T0207000_G02500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes... Me too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You too, ｛Wakaouji＊＊｝?");
            if (Parameter_GetPl1Param(312) == 7){
                Still_StillFace(0, 0, 1);
                Voice_PlayVoice("T0207000_G02600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "My heart has been racing for a long\ntime now.\nIt is because I remembered something\nstrange.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Something strange?");
                Still_StillFace(0, 0, 5);
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0207000_G02700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The chemistry room.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Still_StillFace(0, 0, 1);
                Voice_PlayVoice("T0207000_G02800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Simply, it was when I tried to save\nyou when you looked like you were\ngoing to fall, and you suddenly--");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm, it's fine.\nI know what you're talking about...");
                Still_StillFace(0, 0, 0);
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0207000_G02900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Okay.\nDo you not think that we should do\nit again?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yes.");
                Still_StillFace(0, 6, 2);
                Voice_PlayVoice("T0207000_G03000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "This will be our second time, but it\nis the first kiss we share as people\nwho have fallen in love...");
                }
            else {
                Still_StillFace(0, 0, 1);
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0207000_G03100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Right.\nI was thinking of kissing you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "!!");
                Still_StillFace(0, 0, 0);
                Voice_PlayVoice("T0207000_G03200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "How does it sound?\nUntil now, we were teacher and\nstudent, so do you think that this\nis possible?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yes. I think so.");
                Still_StillFace(0, 6, 2);
                Voice_PlayVoice("T0207000_G03300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Then this will be the first kiss we\nshare as people who have fallen in\nlove...");
                }
            }
        Music_StopBGM(0, 40);
        if (Parameter_GetPl1Param(312) == 7){
            }
        else {
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Still_Event("EV_07_16", #1, 1, 60);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_07_16", #1, 0, 60, 0, 1);
        Still_StillFace(0, 5, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 70);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry...");
        Music_PlayBGM(0, "MN_C_07_002_D00", 127, 40);
        Music_PlayBGM(0, "MN_C_07_004_D00", 127, 40);
        Still_StillFace(0, 0, 6);
        Voice_PlayVoice("T0207000_G03400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You did not do anything that needs\nto be apologized for.");
        Message_Who(0);
        Message_MsgDisp("主人公", "But...");
        Still_StillFace(0, 0, 5);
        Voice_PlayVoice("T0207000_G03500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Surely, the meddling gods must be\ncurious about such a perverse\nmonster such as myself,");
        Still_StillFace(0, 0, 6);
        Voice_PlayVoice("T0207000_G03600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "and let you be by my side for a\nbrief moment so that I can come to\nlike people once more.");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0207000_G03700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "If I ask for anything more, I will\nsurely be punished for it.");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0207000_G03800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do not say any more.\nYou will surely try to say\nsomething, and it will end up to be\na painful memory.");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0207000_G03900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "So... Farewell. Stay healthy.\nAnd congratulations on graduating.");
        Music_StopBGM(0, 60);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 71);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(7, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 7){
            Parameter_InCh1Param(7, 307, 1);
            }
        else {
            Parameter_InCh1Param(7, 306, 1);
            }
        if (Parameter_GetCh1Param(7, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 7){
                Parameter_InCh1Param(7, 307, 2);
                }
            else {
                Parameter_InCh1Param(7, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 7){
            Parameter_InCh1Param(7, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(7, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(7, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(7, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(7, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(7, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(7, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(7, 300, 3);
                }
            }
        }
    }
