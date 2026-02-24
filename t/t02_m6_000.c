section "t02_m6_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(6, 559) >= 6){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Character_Chara_GS2(6, "M6_01F", 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_06_090_D00", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh... ｛Amachi＊＊｝!");
        Voice_PlayVoice("T9906000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Did I scare you?\nI was waiting for you.\nI was worried, because it's late.");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Character_Chara_GS2(6, "NON");
        Still_Pair_Event("EV_06_14", "EV_99_00", 0, 0);
        }
    else {
        Screen_ClearScreen();
        Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
        Screen_WipeIn(3);
        Screen_WipeOut(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah!");
        Voice_PlayVoice("T0206000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Who's there?");
        Message_CloseMsg();
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_06_14", "EV_99_00", 0, 0);
        Still_StillFace(0, 0, 1);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
        Voice_PlayVoice("T0206000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Why were you walking so fast at this\nkinda time?");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0206000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I was waiting for you since I had\nsomething to say, too.\nI've been chasing after you since\nyou left school.");
        Still_StillFace(0, 0, 5);
        Still_StillFace(0, 3, 2);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0206000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You really didn't notice?");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "Is that so... Sorry.");
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0206000_F00400", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "As expected, you don't feel like\nyou're my senior at all...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0206000_F00500", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Even when we first met, I thought\nthat you were the same age as me.");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0206000_F00600", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "But even so... why?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0206000_F00700", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Why are you older than me?");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0206000_F00800", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Why aren't you the same age as me!?\nWhy can't I be with you!?");
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0206000_F00900", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Why...\nare you graduating before me...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0206000_F01000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "... But you know.\nSaying this won't change anything.");
    Still_StillFace(0, 0, 6);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0206000_F01100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Because no matter what I do, nothing\ncan be done to change the one year\ndifference in our ages...");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0206000_F01200", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "That's why...\nI'm not gonna let you go any\nfurther.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_Pair_Event("EV_06_15", "EV_99_00", 1, 1);
    Voice_PlayVoice("T0206000_F01300", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Senpai.");
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0206000_F01400", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "From your point of view, I might\nstill seem unreliable...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0206000_F01500", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "But these feelings I have for you\nare greater than anyone else's.");
    Still_Pair_Event("EV_99_00", "EV_06_15", 1, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0206000_F01600", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Please... Please be my girlfriend!");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("Only if you are fine with me.", "(Answer with a kiss.)", "I'm sorry...");
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
        Still_Approach(6, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_Pair_Event("EV_99_00", "EV_06_14", 0, 0);
            Still_StillFace(0, 0, 5);
            Still_StillFace(0, 3, 2);
            Voice_PlayVoice("T9906000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A kiss... Meaning, perhaps...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah. Do you understand?");
            Still_StillFace(0, 0, 0);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9906000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh, wait a second!");
            }
        else if (var0 == 3){
            Still_Pair_Event("EV_99_00", "EV_06_14", 0, 0);
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 4, 1);
            Voice_PlayVoice("T9906000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh? W-What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I always wanted to express my\nfeelings this way....\nYou didn't notice?");
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 4, 0);
            Voice_PlayVoice("T9906000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI thought you were just messing\naround with me, and poking fun at\nme...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. If you are fine with me.");
            }
        if (var0 == 0){
            Still_Pair_Event("EV_99_00", "EV_06_14", 0, 0);
            }
        System_Wait(60);
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("T0206000_F01700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...... Are you... serious...?");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0206000_F01800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... H-Huh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝...\nAre you crying?");
        Still_StillFace(0, 6, 1);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0206000_F01900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I-I'm not! It's just...");
        Still_StillFace(0, 0, 4);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0206000_F02000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nAt these kinda times, shouldn't you\nbe showing your gentleness as an\nolder woman?");
        if (var0 != 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Right. Sorry.");
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9906000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's fine.... Hey, Senpai.");
            Still_Pair_Event("EV_99_00", "EV_06_15", 1, 1);
            Voice_PlayVoice("T9906000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Every time you touched me, I wanted\nto do the same back to you....\nAlways.");
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T9906000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's why I'm fine.\nWith your special thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Special thing...?");
            Still_StillFace(0, 6, 3);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T9906000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Close your eyes...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Still_Event("");
            }
        else {
            if (Parameter_GetPl1Param(312) == 6){
                Still_StillFace(0, 0, 2);
                Voice_PlayVoice("T0206000_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You didn't even give me your hand\nwhen we first kissed, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So that was a kiss after all...?");
                Still_StillFace(0, 0, 0);
                Voice_PlayVoice("T0206000_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Only you wouldn't think of that as a\nkiss...");
                Still_StillFace(0, 0, 6);
                Voice_PlayVoice("T0206000_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "After that, I...\nI thought about it a lot, I worried\nabout it a lot too.");
                Still_StillFace(0, 0, 6);
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0206000_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're mean, Senpai...");
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "S-Sorry...");
            Still_StillFace(0, 0, 3);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T0206000_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nIf you really feel like you did\nsomething wrong, then close your\neyes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T0206000_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Just. Do. It!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Still_Event("");
            Voice_PlayVoice("T0206000_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I love you.\nPlease continue to treat me well.");
            }
        Music_StopBGM(0, 40);
        if (Parameter_GetPl1Param(312) == 6){
            }
        else {
            }
        Message_CloseMsg();
        Still_Event("EV_06_16", #1, 1, 60);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_06_16", #1, 0, 60, 0, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 60);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "To me, you're just a cute junior,\n｛Amachi＊＊｝...");
        Still_Pair_Event("EV_99_00", "EV_06_14", 0, 0);
        System_Wait(60);
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("T0206000_F02800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry...");
        Still_StillFace(0, 0, 3);
        Music_PlayBGM(0, "MN_C_06_002_D00", 127, 40);
        Voice_PlayVoice("T0206000_F02900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Haha.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Still_StillFace(0, 0, 5);
        Voice_PlayVoice("T0206000_F03000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Geez, Senpai.\nDid you think I was serious?");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0206000_F03100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I was joking, just joking!\nThat trick was successful...");
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("T0206000_F03200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You're really...");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0206000_F03300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "............");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
        Still_Pair_Event("EV_99_00", "EV_06_15", 1, 1);
        System_Wait(60);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0206000_F03400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "......\nThanks for sticking with me during\nthese 2 years.");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 4, 1);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0206000_F03500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I was happy...\nthat there was someone who would\nstill be there for me, even though\nthey knew the real me.");
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0206000_F03600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I get the feeling...\nthat there aren't any other people\nlike that...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Amachi＊＊｝...");
        Still_Pair_Event("EV_99_00", "EV_06_14", 0, 0);
        Voice_PlayVoice("T0206000_F03700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nWill you pretend you didn't hear\nthat?");
        Still_StillFace(0, 0, 5);
        Voice_PlayVoice("T0206000_F03800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'll treat you to something really\nexpensive in return.");
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0206000_F03900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Congratulations on graduating.");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0206000_F04000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Bye bye.");
        Music_StopBGM(0, 60);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 61);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(6, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 6){
            Parameter_InCh1Param(6, 307, 1);
            }
        else {
            Parameter_InCh1Param(6, 306, 1);
            }
        if (Parameter_GetCh1Param(6, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 6){
                Parameter_InCh1Param(6, 307, 2);
                }
            else {
                Parameter_InCh1Param(6, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 6){
            Parameter_InCh1Param(6, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(6, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(6, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(6, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(6, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(6, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(6, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(6, 300, 3);
                }
            }
        }
    }
