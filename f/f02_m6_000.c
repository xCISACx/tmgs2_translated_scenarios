section "f02_m6_000"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0 = 0;
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Character_ChFace(0, 0, 0);
    int var1 = Parameter_Kitaku_Kaiwa(1);
    if (var1 == 0){
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had fun walking home from school\nwith ｛Amachi＊＊｝.)");
        }
    else if (var1 == 1){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("F0206000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, do you know about the legend\nof the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Voice_PlayVoice("F0206000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A story about a prince going to the\nlighthouse many times to meet the\nmermaid princess that he swore he\nwould see, again.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0206000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a little romantic.\nBut it wasn't a happy ending for the\nmermaid princess...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nI feel like I've heard this story\nsomewhere before...)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("F0206000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai do you know about the\nlegend of the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Voice_PlayVoice("F0206000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A prince came to the lighthouse to\nmeet a mermaid princess that he\nswore he would meet, again.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0206000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But isn't it strange?\nIt wasn't a happy ending for the\nmermaid princess.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh?\nI feel like I've heard this story\nsomewhere before...)");
            }
        }
    else if (var1 == 2){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("F0206000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, do you know about the legend\nof the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("F0206000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Apparently, the lighthouse is the\nkey for pointing out where treasure\nis.");
            Voice_PlayVoice("F0206000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I wonder what the treasure is?\nAs expected, it would be jewels and\nthings, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like it's different to the\nrumors that I know...)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("F0206000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai, do you know about the\nlegend of the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("F0206000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That the lighthouse is the key for\npointing out where treasure is!");
            Voice_PlayVoice("F0206000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "How amazing!\nThe treasure surely has to be jewels\nand stuff!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like it's different to the\nrumors that I know...)");
            }
        }
    else if (var1 == 3){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("F0206000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, do you know about the legend\nof the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Voice_PlayVoice("F0206000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Apparently the lighthouse's light\nleads the way for a ghost ship...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("F0206000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "H-How scary. A ghost ship...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like it's different to the\nrumors that I know...)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("F0206000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai, do you know about the\nlegend of the lighthouse?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What kind of legend?");
            Voice_PlayVoice("F0206000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The lighthouse's light leads the way\nfor a ghost ship!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0206000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's scary, but...\nI want to see the ghost ship.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like it's different to the\nrumors that I know...)");
            }
        }
    else if (var1 == 4){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost your\nbirthday, ｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, so you remember. I'm glad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want presents?\nOr is there something that you want?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0206000_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh, that would be bad on my part.\nJust the thought is enough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost your\nbirthday, ｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, right!");
            Voice_PlayVoice("F0206000_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm, as for presents...\nRight, an extravagant dinner would\nbe nice!");
            Message_Who(0);
            Message_MsgDisp("主人公", "... I don't have that kind of money.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 5){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nend-of-semester tests.");
            Voice_PlayVoice("F0206000_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, are you the type to study\nfor the exams?");
            Message_Who(0);
            Message_MsgDisp("主人公", "\"The type to\"...\nYou don't, ｛Amachi＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("F0206000_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I read over the text book and solve\nsome easy practice problems...\nThat's about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "And you're fine with just doing\nthat?\nYou must be smart...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the end\nof semester tests.");
            Voice_PlayVoice("F0206000_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, how troublesome.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you also dislike studying for\ntests, ｛Amachi＊＊｝?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("F0206000_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Rather than hating it, it's\nbothersome.\nWouldn't it be fine if we only did\nexams once a year?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 6){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nSports Festival.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, that's right.\nI get excited before the events at\nthe Sports Festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "So you like festivals,\n｛Amachi＊＊｝.\nIt would be nice if it were a fun\nSports Festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nSports Festival.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, right!\nI get excited before the events at\nthe Sports Festival!");
            Message_Who(0);
            Message_MsgDisp("主人公", "So you like festivals,\n｛Amachi＊＊｝.\nIt would be nice if it were a fun\nSports Festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 7){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Have you decided on plans for the\nSummer Break, ｛Amachi＊＊｝?");
            Voice_PlayVoice("F0206000_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've thought about going to the\nbeach.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, is that so?\nAfter all, when you think about\nSummer, you think of the beach.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Also, the Fireworks Festival.\nIt'd be nice if I could enjoy the\nSummer events.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Have you decided on plans for the\nSummer Break, ｛Amachi＊＊｝?");
            Voice_PlayVoice("F0206000_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Nothing in particular.\nAh, I want to go to the beach!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, after all, when you think of\nSummer, you think of the beach.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Also, the Fireworks Festival.\nAren't there a lot of things that\nyou can only do in Summer?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 8){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nCulture Festival.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F03200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, I am looking forward to it.\nI love the atmosphere of festivals.");
            Message_Who(0);
            Message_MsgDisp("主人公", "As we get closer to the Culture\nFestival, the entire school gets\nexcited.");
            Voice_PlayVoice("F0206000_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's even fun just think about and\ndiscussing what to do.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nCulture Festival.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F03400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah! Ah, I'm looking forward to it!\nIt's the largest festival in school!");
            Message_Who(0);
            Message_MsgDisp("主人公", "As we get closer to the Culture\nFestival, the entire school gets\nexcited.");
            Voice_PlayVoice("F0206000_F03500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah!\nIt's even fun just think about and\ndiscussing what to do!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 10){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nCulture Festival.");
            Voice_PlayVoice("F0206000_F03600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, are your preparations for\nthe play going well?\nIt would be a bit unnerving.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah, it is, actually.\nMy heart is pounding.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F03700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But that is also enjoyable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost the\nCulture Festival.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0206000_F03800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh yeah, are your preparations for\nthe play going well?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, it's going well.");
            Voice_PlayVoice("F0206000_F03900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You have to practice enough to not\nmake any blunders!\nIf you made a mistake in front of\nthe entire student body...");
            Message_Who(0);
            Message_MsgDisp("主人公", "E-Enough! Don't say such things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 11){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost Winter\nBreak.\nHave you made plans?");
            Voice_PlayVoice("F0206000_F04000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I was thinking about going skiing or\nice skating.");
            Message_Who(0);
            Message_MsgDisp("主人公", "So you intend on thoroughly enjoying\nthe Winter sports.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("F0206000_F04100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Wouldn't you?\nSeeing as you can only do them in\nWinter?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Have you decided on plans for the\nWinter Break, ｛Amachi＊＊｝?");
            Voice_PlayVoice("F0206000_F04200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I definitely plan on going skiing\nand ice skating!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("F0206000_F04300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I mean you can only do it in Winter,\nso I'd like to enjoy it as much as\npossible!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see.\nSo you intend on thoroughly enjoying\nthe Winter sports.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 12){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, it's almost Spring\nBreak.\nHave you made plans?");
            Voice_PlayVoice("F0206000_F04400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I haven't really thought about it.\nPerhaps I'll just go out when I feel\nlike it, or go around to cake\nstores.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Going around to cake stores, huh?\nThat's kind of cute!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("F0206000_F04500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I have a weakness for sweet food...\nIs it a little strange?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Have you decided on plans for the\nSpring Break, ｛Amachi＊＊｝?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("F0206000_F04600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Nothing in particular.\nAh, perhaps I will go around to cake\nstores.");
            Voice_PlayVoice("F0206000_F04700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's because there are a lot of new\nstores opening and lots of new\nproducts being released in Spring!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Going around to cake stores, huh?\nThat's kind of cute!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 13){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("F0206000_F04800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That reminds me, isn't it almost the\nschool field trip?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.\nI'm looking forward to it.");
            Voice_PlayVoice("F0206000_F04900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Maybe the school will be quieter\nduring the school field trip.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes.\nThe atmosphere in the school would\nbe a little different than normal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh yeah, it's almost the school\nfield trip.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("F0206000_F05000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hmm...\nWell, it has nothing to do with me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, that's true, but...");
            Voice_PlayVoice("F0206000_F05100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, why don't you enjoy it as much\nas possible?\nTry not to make the teachers mad.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 3, (#1), 1);
            Voice_PlayVoice("F0206000_F05200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, and also!\nYou must buy back souvenirs!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else if (var1 == 14){
        Character_Chara_GS2(6, "M6_01F", 0);
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("F0206000_F05300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That reminds me, Senpai is going to\ngraduate soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0206000_F05400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You were always helping me, Senpai.\nI'll be sad once you leave.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Me too, I'm a little reluctant to\nleave.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("F0206000_F05500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Graduation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0206000_F05600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is soon... isn't it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yeah.");
            Voice_PlayVoice("F0206000_F05700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Do you feel lonely?");
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0206000_F05800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nWell, it will probably be boring\nwithout the person I tease there.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThat's the kind of conversation we\nhad while walking home.)");
            }
        }
    else {
        Background_Bg_GS2("BG_SC000_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had fun walking home from school\nwith ｛Amachi＊＊｝.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
