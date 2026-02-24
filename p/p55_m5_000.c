section "p55_m5_000"{
    int var0;
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetPl1Param(338) < 3){
            if (Parameter_bunka_jyu(0) == 1){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was a success.\nA lot of people came to see our\nworks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It was worth doing our best!");
                Voice_PlayVoice("P5505000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's do our best so that even more\npeople would come next year!\nYou've worked hard today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Chris＊＊｝!");
                var0 = 0;
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Looking at the total numbers, not\nmany people came to see our work.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("P5505000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nEven if we get sad over it, it can't\nbe helped.\nLet's do our best so that more\npeople would come next year!");
                Voice_PlayVoice("P5505000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nYou too, ｛Chris＊＊｝.");
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E00500", 5, "P5505000_E00501");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard,\n｛主人公｝.\nOur exhibit was really popular.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It was worth doing our best!");
                Voice_PlayVoice("P5505000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wonder if Himeko-chan gave you\npower to paint.\nYou really put a lot of effort into\nyours.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hehe, thanks.");
                Voice_PlayVoice("P5505000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Same here, thanks.\nThis has become a good memory for\nme.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("P5505000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Really, thank you.");
                var0 = 0;
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's kinda regrettable that the\nCulture Festival ended with this\nlacking feeling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("P5505000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It really is regrettable, being our\nlast Culture Festival and all...\nAnyway, you've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You too, ｛Chris＊＊｝.");
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetPl1Param(338) < 3){
            if (Parameter_bunka_jyu(0) == 1){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("", 5, "P5505000_E01100");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard,\n｛主人公｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "You too, ｛Chris＊＊｝!");
                Voice_PlayVoice("P5505000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was so good.\nOur art piece was also very popular!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It was worth doing our best!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("P5505000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nI wanna make something with an even\nbigger impact next year.");
                var0 = 0;
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, you've worked hard...");
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("P5505000_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "We've got a lot of stuff to reflect\non from this year...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("P5505000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's try harder so this doesn't\nhappen again next year!\nOkay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard.\nThe piece of art was very popular!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It was worth doing our best!");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("P5505000_E01800", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm glad that I could make memories\nwith you at our last Culture\nFestival.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Same here!");
                var0 = 0;
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("P5505000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's kinda regrettable that the\nCulture Festival ended with this\nlacking feeling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("P5505000_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It really is regrettable, being our\nlast Culture Festival and all...\nAnyway, you've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You too, ｛Chris＊＊｝.");
                var0 = 1;
                }
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5505000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've worked hard.\nIt was a big, big, big success.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nMy heart was racing since so many\npeople came to see our work.");
            Voice_PlayVoice("P5505000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Me too.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5505000_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm glad...\nI joined the Art Club and that I\ncould be with you.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Same here!\nThanks, ｛Chris＊＊｝.");
            var0 = 0;
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5505000_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nEven though the results were bad, it\nwas a fun Culture Festival, right?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5505000_E02500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So you can't make that face.\nIt's the end, so smile, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nThanks, ｛Chris＊＊｝.");
            var0 = 1;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
            System_Call_GS2("D01", "M4", 0);
            }
        }
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(1);
    if (Parameter_GetPl1Param(338) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how this year's Culture\nFestival ended.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how my last high school\nCulture Festival ended.)");
        }
    Parameter_AddPl1Param(322, 1);
    switch (var0){
        case 0:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, 4);
        Parameter_AddCh1Param(#1, 62, #4);
        break ;
        case 1:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, #4);
        Parameter_AddCh1Param(#1, 62, 1);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
