section "h4a_m6_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Voice_PlayVoice("H4A06000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yay!\nThey won the high school baseball\nchampionships!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they're amazing!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Baseball Club are the national\nchampions so does it mean the\nCheerleading Club and the Cheer\nSquad are champions too?");
                Voice_PlayVoice("H4A06000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We both did our best. Also...\ncongratulations, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad that I stayed in\nthe Cheerleading Club...)");
                }
            else {
                Voice_PlayVoice("H4A06000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Amazing, Senpai!\nCongratulations on the victory!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it really is great!\nThis is also because the players did\ntheir best.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Didn't you do your best, Senpai?\nYou cheered until you lost your\nvoice....\nWell, me too.");
                Voice_PlayVoice("H4A06000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I feel like you exhausted\nyourself....\nBut that is something you'd do.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Baseball Club are the champions,\nso does this mean the Cheerleading\nClub and the Cheer Squad are\nchampions too?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("H4A06000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We both did our best. Also...\ncongratulations, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Voice_PlayVoice("H4A06000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was close...\nBut it was a good match.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... but I feel vexed...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4A06000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was the Baseball Club that lost,\nright?\nIt's not our fault....\nEven though our cheer was like that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried a little\nharder.)");
                }
            else {
                Voice_PlayVoice("H4A06000_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, please don't make that face.\nWe both tried our very best\ncheering, right?");
                Voice_PlayVoice("H4A06000_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was the Baseball Club that lost,\nright?\nIt's not our fault...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A06000_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, umm...\nIf you want to cry, I'll lend you my\nchest, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I did my very best cheering, so\nthere's nothing to regret.)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Voice_PlayVoice("H4A06000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yay!\nThey're the inter high school\nchampions!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it's amazing!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Track and Field Club are\nchampions, so does it mean the\nCheerleading Club and the Cheer\nSquad are champions too?");
                Voice_PlayVoice("H4A06000_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We both did our best. Also...\ncongratulations, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad that I stayed in\nthe Cheerleading Club...)");
                }
            else {
                Voice_PlayVoice("H4A06000_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Amazing, Senpai!\nThey're the champions!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it really is great!\nThis is also because the atheletes\ndid their best.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A06000_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Didn't we also do our best?\nMy voice has gotten hoarse.\nYou also did your best, Senpai!");
                Voice_PlayVoice("H4A06000_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I feel like you exhausted\nyourself....\nBut that is something you'd do.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Track and Field Club are\nchampions, so does it mean the\nCheerleading Club and the Cheer\nSquad are champions too?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("H4A06000_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We both did our best. Also...\ncongratulations, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_15F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            if (Parameter_GetCh1Param(6, 130) <= 3){
                Voice_PlayVoice("H4A06000_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was close.\nI thought that we'd win.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... How vexing...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It was the Track and Field Club that\nlost, right?\nIt's not our fault....\nEven though we also stuffed up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried a little\nharder.)");
                }
            else {
                Voice_PlayVoice("H4A06000_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A06000_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, please don't make that face.\nWe both tried our very best\ncheering, right?");
                Voice_PlayVoice("H4A06000_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even though we can cheer...\nwe're not the ones playing.\nIt can't be helped.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A06000_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, umm...\nIf you want to cry, I'll lend you my\nchest, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I did my very best cheering, so\nthere's nothing to regret.)");
                }
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    }
