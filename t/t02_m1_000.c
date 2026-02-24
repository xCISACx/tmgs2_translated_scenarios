section "t02_m1_000"{
    System_GlobalWork(3, 0, 0);
    Background_Bg_GS2("BG_ED017_SP_1", #1, #1, 1);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Huh?\nThe painting hanging over there\nis...)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(The pitiable story of the mermaid\nand the young man...\nThen this lighthouse is...)");
    Message_CloseMsg();
    Screen_WipeOut(3);
    SoundEffect_PlayStream(3, "SS_T_00_033_M00");
    System_Wait(60);
    SoundEffect_PlayStream(3, "SS_T_00_051_M00");
    Background_Bg_GS2("BG_ED015_SP_1", #1, #1, 1);
    Screen_WipeIn(3);
    System_Wait(40);
    Background_Bg_GS2("BG_ED015_SP_1", #1, #1, 1);
    System_Wait(60);
    Background_Bg_GS2("BG_ED016_SP_1", #1, #1, 1);
    System_Wait(40);
    Screen_WipeOut(3);
    Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 1);
    Screen_WipeIn(3);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Yes, it's just as I thought...)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(A beautiful sunset...\nThe smell of the salty air and the\ncolor of the ocean are the same as\nhow it was then.)");
    Message_CloseMsg();
    Screen_WipeOut(3);
    Screen_ClearScreen();
    System_Call_GS2("A01", "PL", 1);
    Screen_ClearScreen();
    Screen_ClearScreen();
    Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 0);
    Screen_WipeIn(3);
    Message_Who(0);
    Message_MsgDisp("主人公", "(How nostalgic...\nI wonder what ｛Saeki＊＊｝\nis doing now...)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(...\nBecause he's graduated,\n｛Saeki＊＊｝ is no longer\nhere)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(But I miss him...)");
    if (Parameter_GetCh1Param(1, 559) >= 6){
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("", 1, "T9901000_A00000");
        Message_Who(1);
        Message_MsgDisp("？？？", "｛主人公｝. You're late.");
        Character_Chara_GS2(1, "M1_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
        Voice_PlayVoice("T9901000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "My flight had come in.\nWhen I went to school, the\ngraduation ceremony had already\nended.");
        Message_CloseMsg();
        Screen_WipeOut(3);
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_01_18", "EV_99_00", 0, 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_01_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        }
    else {
        Voice_PlayVoice("T0201000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I've finally found you.");
        Message_CloseMsg();
        Screen_WipeOut(3);
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_01_18", "EV_99_00", 0, 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_01_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
        Voice_PlayVoice("T0201000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I was running all over school,\nasking people where you were, but I\ncouldn't find you...");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "Why are you here...?");
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("T0201000_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Because you're here.");
    Voice_PlayVoice("T0201000_A00300", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Because I promised you that I'd\nsurely find you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
    Still_StillFace(0, 0, 6);
    Voice_PlayVoice("T0201000_A00400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Forgive me.\nI was an idiot for letting go of the\nmermaid's hand, even though I\nfinally found her.");
    Message_Who(0);
    Message_MsgDisp("主人公", "So you remembered...");
    Still_StillFace(0, 0, 5);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0201000_A00500", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "As if I could forget.");
    Voice_PlayVoice("T0201000_A00600", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Even though I was apart from you, I\nalways wanted to see you, so badly\nto the point I'd go crazy...");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0201000_A00700", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I finally understand that I should\njust throw away this stupid pride.");
    Still_StillFace(0, 0, 4);
    Voice_PlayVoice("T0201000_A00800", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "It can't be helped that it's uncool,\nthat it's pathetic.\nBecause I only think of you...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0201000_A00900", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I have no hesitations anymore.\nThat is the real me.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
    Still_StillFace(0, 0, 3);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0201000_A01000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I was so childish, so helpless, and\nall I did was misunderstand...");
    Voice_PlayVoice("T0201000_A01100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Yet...\nYou were always there desperately\ntrying to catch me when it seemed\nlike I would fall apart...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0201000_A01200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Until I left you, I didn't realize\nthe importance of you.\nI was so stupid... That's why I...");
    Still_StillFace(0, 0, 4);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0201000_A01300", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "That's why I should discover what I\nshould be doing with you...\nI can express myself from my heart\nnow.");
    Still_Pair_Event("EV_99_00", "EV_01_18", 0, 0);
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("T0201000_A01400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I'm never letting you go, so let's\nstay like this forever...\nI want you to be by my side forever.");
    Message_TextSpeed(#1);
    System_Wait(#60);
    int var0;
    Message_MsgSel("Me too...", "(Answer with a kiss.)", "... Sorry.");
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
        Still_Approach(1, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    Message_TextSpeed(8);
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T9901000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A kiss...\nThen you also remember that day...");
            Message_Who(0);
            Message_MsgDisp("主人公", "We made a promise with a kiss that\nday, didn't we?");
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("T9901000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Yeah.");
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("T9901000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "H-Hey... What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I mean, I also express my feelings\nlike this, but you don't take note\nof them at all!");
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("T9901000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see... Is that so...? Sorry...\nSorry, okay? I'm just embarrassed...");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "I don't ever want to part from you\neither, ｛Saeki＊＊｝...");
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("T0201000_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, we never will.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0201000_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's stay together forever.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Yeah.");
        Still_StillFace(0, 0, 1);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0201000_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Hey.\nThere's something I want you to take\ncare of.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Me?");
        Voice_PlayVoice("T0201000_A01800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. Give me your hand.");
        Still_Event("EV_01_19", #1, 1, 120);
        Message_Who(0);
        Message_MsgDisp("主人公", "... A key?");
        Voice_PlayVoice("T0201000_A01900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, it's the key to Sangosho.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is it okay for me to hold onto\nit...?");
        Voice_PlayVoice("T0201000_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I want you to hold onto it.\nUntil the day we can open Sangosho\nagain.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm glad that...\nYou're not giving up on Sangosho.");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0201000_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As if I would give up.\nIt might take some time, but...");
        Voice_PlayVoice("T0201000_A02200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Be it working part- time, or going\nto uni, there are things that I can\ndo.\nI should start from there.");
        Still_StillFace(0, 6, 3);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0201000_A02300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When the day comes, let's open\nSangosho together with this key, so\ndon't lose it, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I'll treasure it...");
        if (var0 == 0){
            if (Parameter_GetPl1Param(312) == 1){
                Still_Pair_Event("EV_99_00", "EV_01_22", 0, 0);
                Voice_PlayVoice("T0201000_A02400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey...\nI've been thinking about this for a\nlong time now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0201000_A02500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "During the 1st year, on the way home\nfrom school, you know...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0201000_A02600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I wonder if we had never kissed,\nwould we have not realized that we\nhad met before?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Maybe...");
                Voice_PlayVoice("T0201000_A02700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nOr maybe Fate was trying to annoy\nus, and force us together?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, maybe.");
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0201000_A02800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It feels like it was a coincidence,\nbut it also feels like it was\ndecided for us from the start...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wonder if it was fate or\ncoincidence...");
                Still_StillFace(0, 0, 1);
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0201000_A02900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "If we try kissing once more, maybe\nwe will know...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Voice_PlayVoice("T0201000_A03000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Let's make sure that we'll always be\ntogether from now on...");
                Voice_PlayVoice("T0201000_A03100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I love you.");
                Message_CloseMsg();
                Music_StopBGM(0, 40);
                Screen_WipeOut(2);
                Still_Event("EV_01_20", #1, 1, 120);
                Screen_WipeIn(2);
                System_Wait(120);
                Still_Event("EV_01_20", #1, 0, 120, 0, 1);
                Message_CloseMsg();
                System_Wait(120);
                Screen_WipeOut(3);
                Music_StopBGM(0, 40);
                }
            else {
                Still_Pair_Event("EV_99_00", "EV_01_22", 0, 0);
                Voice_PlayVoice("T0201000_A03200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey.\nYou know, I've thought up the rest\nof the story....\nDo you wanna hear it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Will you tell me?");
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0201000_A03300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The mermaid and the young man met\nonce again in the vast sea.\nWhile holding hands, they returned.");
                Voice_PlayVoice("T0201000_A03400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The villagers made amends, and\neveryone in the village enjoyed the\nrest of their lives.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Then it's a happy ending?");
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0201000_A03500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah. But there's more.");
                Voice_PlayVoice("T0201000_A03600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The two opened a cafe.\nA cafe that was below the\nlighthouse, that served famous\ncoffee.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, what was the name of the store?");
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0201000_A03700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You know it already, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nIt would be nice if things ended\nthis way...");
                Voice_PlayVoice("T0201000_A03800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It will.\nBecause the promise we had made with\na kiss has been fulfilled.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah, you're right.");
                Still_StillFace(0, 0, 1);
                Voice_PlayVoice("T0201000_A03900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The first kiss was so that we could\nmeet again...\nWhat will happen the second time we\nkiss?");
                Message_Who(0);
                Message_MsgDisp("主人公", "What will happen?");
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0201000_A04000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Let's confirm that we'll always be\ntogether from now on...");
                Voice_PlayVoice("T0201000_A04100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I love you.");
                Message_CloseMsg();
                Music_StopBGM(0, 40);
                Screen_WipeOut(2);
                Still_Event("EV_01_20", #1, 1, 120);
                Screen_WipeIn(2);
                System_Wait(120);
                Still_Event("EV_01_20", #1, 0, 120, 0, 1);
                System_Wait(120);
                Screen_WipeOut(3);
                Music_StopBGM(0, 40);
                }
            }
        else {
            Still_Pair_Event("EV_99_00", "EV_01_22", 0, 0);
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9901000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey...\nThere is something else I wanted to\ntell you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?");
            Voice_PlayVoice("T9901000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You remembered it, earlier.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T9901000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah...\nNo, I'll just leave it alone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, tell me.");
            Still_StillFace(0, 6, 2);
            Voice_PlayVoice("T9901000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Then come a little closer.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Still_StillFace(0, 0, 1);
            Still_StillFace(0, 6, 3);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T9901000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I've always wanted to do this to\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "!!");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Still_Event("EV_01_20", #1, 1, 120);
            Screen_WipeIn(2);
            System_Wait(120);
            Still_Event("EV_01_20", #1, 0, 120, 0, 1);
            System_Wait(120);
            Screen_WipeOut(3);
            }
        System_GlobalWork(3, 0, 10);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "... Sorry.\nI can't respond to your feelings,\n｛Saeki＊＊｝...");
        Still_StillFace(0, 0, 6);
        Message_Who(1);
        Message_MsgDisp("Saeki", "......");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wanted to tell you when I met you,\n｛Saeki＊＊｝...");
        Music_PlayBGM(0, "MN_C_01_001_D00", 127, 40);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0201000_A04300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see...");
        Voice_PlayVoice("T0201000_A04400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No matter what happened, the young\nman had to leave the mermaid\nprincess...");
        Still_StillFace(0, 0, 3);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0201000_A04500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No matter what happens, I have to as\nwell...\nI understand that now.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0201000_A04600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "But I still think that it was a good\nthing that we met.");
        Voice_PlayVoice("T0201000_A04700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Because the times we laughed\ntogether, and the time we fought,\nthose were real.");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0201000_A04800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "By falling in love with you, I feel\nlike I understand myself a little\nmore.");
        Still_StillFace(0, 0, 5);
        Voice_PlayVoice("T0201000_A04900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I feel like I can like myself a\nlittle more.\nI won't lose sight of myself.\nSo if perhaps one day...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... One day?");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0201000_A05000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well...\nOne day, if I get the chance to open\nSangosho again...");
        Still_StillFace(0, 0, 2);
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0201000_A05100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Come and drink coffee.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. I look forward to it.");
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("T0201000_A05200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah... Until then.\nI'll see you later...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Yeah, I'll see you later.");
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 11);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(1, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 1){
            Parameter_InCh1Param(1, 307, 1);
            }
        else {
            Parameter_InCh1Param(1, 306, 1);
            }
        if (Parameter_GetCh1Param(1, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 1){
                Parameter_InCh1Param(1, 307, 2);
                }
            else {
                Parameter_InCh1Param(1, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 1){
            Parameter_InCh1Param(1, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(1, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(1, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(1, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(1, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(1, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(1, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(1, 300, 3);
                }
            }
        }
    }
