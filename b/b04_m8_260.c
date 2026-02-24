section "b04_m8_260"{
    int var0 = Date_GetDateOption(2, 78);
    System_GlobalWork(6, 0, 1);
    int var1;
    var1 = Parameter_GetSysParam(4);
    switch (var1){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    System_Wait(5);
    if (var0 == 0){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Still_StillFace(0, 3, 3);
        Background_CarBGOpen2("BG_EX170_AU_0");
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ah～, let's go!\nFasten your seat belt.");
        Message_MsgSel("I'm a bit nervous...", "Please drive safely.", "Let's go! Slam on it!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 2, 6);
            Still_StillFace(0, 3, 3);
            Voice_PlayVoice("S0608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            SoundEffect_PlayStream(3, "SS_DSE_004_000");
            Background_CarBGScroll(0);
            Background_CarBGScroll(#1);
            Background_CarBgSpeedChange(#8, 240);
            System_Wait(120);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("B0408260_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Of course.\nIt's safety first when delivering\nflowers so leave it to me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            SoundEffect_PlayStream(3, "SS_DSE_004_000");
            Background_CarBGScroll(0);
            Background_CarBGScroll(#1);
            Background_CarBgSpeedChange(#8, 240);
            System_Wait(120);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("B0408260_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Rejected.\nI wouldn't do it if it was just me,\nso I definitely wouldn't do it when\nyou're here in case we got into an\naccident.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            SoundEffect_PlayStream(3, "SS_DSE_004_000");
            Background_CarBGScroll(0);
            Background_CarBGScroll(#1);
            Background_CarBgSpeedChange(#8, 240);
            System_Wait(120);
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Still_StillFace(0, 2, 0);
        Still_StillFace(0, 3, 2);
        Background_CarBGOpen2("BG_EX170_AU_0");
        Background_CarBGScroll(0);
        Background_CarBGScroll(#1);
        Background_CarBgSpeedChange(#8, 8);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Heeey, something wrong?\nYou suddenly went silent.");
        Message_MsgSel("... I feel sick.", "I was admiring your handling of the wheel.", "Aah, it was a good moment!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Still_StillFace(0, 2, 5);
            Still_StillFace(0, 3, 1);
            Voice_PlayVoice("B0408260_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ack, you serious!? Tell me sooner!\nEven if you refrain from telling me,\nit's not good, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("B0408260_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You serious?\nI'm actually glad you like it.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 2, 5);
            Still_StillFace(0, 6, 2);
            Voice_PlayVoice("B0408260_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What!?\nOh, were you listening to the radio?\nSorry, sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Still_StillFace(0, 2, 0);
        Still_StillFace(0, 3, 2);
        Background_CarBGOpen2("BG_EX170_AU_0");
        Background_CarBGScroll(0);
        Background_CarBGScroll(#1);
        Background_CarBgSpeedChange(#8, 8);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "If you're sleepy, you can sleep.\nOkay?");
        Message_MsgSel("As long as you keep talking, I'm okay.", "｛Masaki＊＊｝'s voice makes me sleepy...", "... I'm sorry, I wasn't listening.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Voice_PlayVoice("B0408260_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, that'd help.\nI surely sensed you going away for a\nmoment when you got quiet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Still_StillFace(0, 2, 1);
                Still_StillFace(0, 3, 2);
                Voice_PlayVoice("B0408260_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I'm that boring?\nGood or bad, you sure are blunt...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Still_StillFace(0, 0, 2);
                Voice_PlayVoice("B0408260_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Hey, hey...\nAre you bored when I talk?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, well, it's not like that...");
                Still_StillFace(0, 2, 6);
                Still_StillFace(0, 3, 2);
                Voice_PlayVoice("B0408260_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Then you mean it's relaxing...\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, something like that.");
                Still_StillFace(0, 0, 2);
                Voice_PlayVoice("B0408260_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Complicated.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes?");
                Still_StillFace(0, 2, 1);
                Still_StillFace(0, 6, 2);
                Still_StillFace(0, 3, 5);
                Voice_PlayVoice("B0408260_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "That's not the kind of thing to say\nin a car.\nIt would be, for example, something\nto say in my room...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Still_StillFace(0, 0, 5);
                Still_StillFace(0, 4, 1);
                Voice_PlayVoice("B0408260_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Aah, ack! I-It's nothing!");
                Still_StillFace(0, 2, 6);
                Still_StillFace(0, 6, 2);
                Still_StillFace(0, 3, 2);
                Still_StillFace(0, 7, 0);
                Voice_PlayVoice("B0408260_H01600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nCrap, what the hell is my mouth\nsaying...\nCalm down, Motoharu...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's making Masaki-senpai so\nflustered?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("B0408260_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What, are you already sleeping?\nSorry. It's fine, sleep.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Background_CarBGOpen2("BG_EX170_AU_0");
        Background_CarBGScroll(0);
        Background_CarBGScroll(#1);
        Background_CarBgSpeedChange(#8, 8);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H01800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Is there somewhere you want to go?");
        Message_MsgSel("Let's attack the Mountain Pass!", "I want to drive to the beach.", "I'll leave it to you, Masaki-senpai▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("B0408260_H01900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Not attack it! ...\nReally, how did you acquire so much\nknowledge on things like that...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 0, 0);
            Still_StillFace(0, 3, 3);
            Voice_PlayVoice("B0408260_H02000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Good idea.\nSince we'll be there, let's go eat\nsomething yummy.\nSeafood.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("B0408260_H02100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, good.\nThen today, we'll go with Masaki\nMotoharu's special project: a secret\ndrive.\nLet's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            break ;
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Still_StillFace(0, 2, 5);
        Still_StillFace(0, 3, 3);
        Background_CarBGOpen2("BG_EX170_AU_0");
        Background_CarBGScroll(0);
        Background_CarBGScroll(#1);
        Background_CarBgSpeedChange(#8, 8);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H02200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "There's this famous tunnel where as\nsoon as you get to it, monsters will\nstart appearing...");
        Message_MsgSel("Now that you mention it, I've heard of it.", "We're taking a detour to there, right...?", "Please don't fall for such an obvious lie!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("B0408260_H02300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It might actually be true, if you\nalso know about it.\nShould we go next time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("B0408260_H02400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hahaha, I'm kidding!\nTo go there and actually be scared\nwould be more blessing than I\ndeserve.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("B0408260_H02500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey you～...\nWhat's with that comment?\nEven if it's a lie, there are other\nways to say it, right?\nOther ways.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 5){
        if (Parameter_GetCh1Param(8, 130) < 4){
            }
        else {
            }
        Still_StillFace(0, 2, 0);
        Still_StillFace(0, 3, 2);
        Background_CarBGOpen2("BG_EX170_AU_0");
        Background_CarBGScroll(0);
        Background_CarBGScroll(#1);
        Background_CarBgSpeedChange(#8, 8);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408260_H02600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It's jammed here...");
        Message_MsgSel("It'd be nice if it was always jammed.", "Let's sing a song.", "Take the next right for a detour!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Still_StillFace(0, 2, 1);
                Still_StillFace(0, 6, 2);
                Still_StillFace(0, 3, 2);
                Voice_PlayVoice("B0408260_H02700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Hey, you～...\nSay that when you're in the driver's\nseat.\nYou've got zero sympathy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Still_StillFace(0, 2, 6);
                Still_StillFace(0, 6, 2);
                Still_StillFace(0, 3, 2);
                Voice_PlayVoice("B0408260_H02800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Why is that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's because...");
                Still_StillFace(0, 3, 0);
                Voice_PlayVoice("B0408260_H02900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well, I don't mind being stuck in\ntraffic if I'm with you.");
                Still_StillFace(0, 2, 1);
                Still_StillFace(0, 3, 3);
                Voice_PlayVoice("B0408260_H03000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nIt would be okay if you gave into\ntemptation, too.\nLike all through the night.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...");
                Still_StillFace(0, 2, 5);
                Still_StillFace(0, 4, 1);
                Voice_PlayVoice("B0408260_H03100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "K-Kidding! I'm joking!");
                Still_StillFace(0, 2, 1);
                Still_StillFace(0, 3, 6);
                Voice_PlayVoice("B0408260_H03200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", ".........\nIf you did, I'd just shut up and do\nnothing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Pardon?");
                Still_StillFace(0, 2, 2);
                Still_StillFace(0, 3, 3);
                Voice_PlayVoice("B0408260_H03300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Hahaha～...\nBefore that actually happens, I'll\ntake a detour.\nYeah, I'll do that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what was\n｛Masaki＊＊｝ talking about\nearlier...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("B0408260_H03400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hahaha, that's a good idea!\nGimme an upbeat song!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Still_StillFace(0, 2, 5);
            Still_StillFace(0, 6, 2);
            Still_StillFace(0, 3, 2);
            Voice_PlayVoice("B0408260_H03500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Really? I'm surprised you know that.\nI'll take that route then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
