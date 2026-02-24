section "b02_m3_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(3, 2, (#1), 2);
        Voice_PlayVoice("B0203000_C02500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Ah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, did you notice?\nI wore the present I got from you,\n｛Hikami＊＊｝!");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0203000_C02600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is better than I imagined...\nit is perfect.\nIt was worth worrying over what to\nchoose!\nPlease continue to wear it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ looks elated!\nI'm glad I wore it!)");
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C02900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... You are wearing a yukata today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I bought one so I could wear\nit today.\nHow does it look...?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0203000_C03000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You're asking me...\nIt is nice, in a cool way.\nEven though we didn't discuss\nwearing one earlier, you look\nquite...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay! He looks elated!)");
        Parameter_AddCh1Param(3, 61, 5);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C02700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Hm?\nIs that the uniform that you use on\nyour days off?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, the same clothes...!");
        Character_ChFace(1, 0, 9);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C02800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "So you wear your school uniform on\nnormal days, and that on other days.\nWhat an unusual person.");
        Message_Who(0);
        Message_MsgDisp("主人公", "T-That's not...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I messed up!)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C01700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There is something I want to ask\nyou.\nI have no intention of repudiating\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh...\nwhat's wrong with you, all of a\nsudden?");
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0203000_C01800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I think of myself as a man with\ncommon sense.\nSo I don't understand what is good\nabout those clothes.\nIt looks bizarre to me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wah, he said it so frankly.\nPerhaps I look weird...)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C01000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIs the temperature in your room low?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, why?");
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0203000_C01100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If not, then you should not have\npicked such thick clothing.\nOr perhaps you are extremely\nsensitive to the cold?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like the clothes I am\nwearing are a little too thick...)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C01200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Do you have a fever or something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, why?");
        Character_ChFace(1, 0, 9);
        Character_BlinkStart(3, 2, (#1), 2);
        Voice_PlayVoice("B0203000_C01300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No matter how I look at you, you're\nlightly dressed.\nEven if you are fine now, you will\nbe cold later.\nPerhaps you are training.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nIt seems like I'm dressed too\nlightly...)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWhen you choose what clothes to\nwear: 1: Decide with intuition.\n2: Worry.... Which is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh......?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 3, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0203000_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIn other words, if you chose 1, you\nshould think about it more, if you\nchose 2, you should wear your\nuniform.");
        Character_ChFace(1, 0, 3);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0203000_C01600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Now then, if you come looking like\nthat next time, the date will be\nover without us ever going anywhere.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, I screwed up the combination\nof clothes I'm wearing!)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Do you like such clothing?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, these clothes...? Is it weird?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0203000_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No, I have no intention of denying\nyour tastes.\nHowever... our tastes are different.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, I should have worn other\nclothes!)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nDid you choose those clothes by\nyourself?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, is it weird?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(3, 2, (#1), 2);
        Voice_PlayVoice("B0203000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No, it is not weird.\nAs long as my senses aren't strange,\nI think that look is really nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Hikami＊＊｝.)");
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0203000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "By the way, those clothes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? These clothes?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That's right.\nThey are something high school\nstudents should wear, it leaves a\ngood impression.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Hikami＊＊｝\nlikes these clothes!)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0203000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That... is a beautiful color.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This color?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, I was drawn to it without\nrealizing.\nIt's nice, it has a sense of\nfreshness.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, so ｛Hikami＊＊｝ likes\nwhite.)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C01900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nBy the way, are those clothes the\nlatest trend?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, you know the trends?\nYou mean my ｛流行服名｝,\nright?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C02000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes.\nI've been seeing it in town lately.\nIt seems like only fashionable\npeople wear it.\nYou dress quite well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, I'm glad I checked the\ntrends!)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0203000_C02100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That color...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, what of it?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C02200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I'm not knowledgeable when it comes\nto trends, but I often see that\ncolor in town.\nIs it trendy? It suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, I was complimented by\n｛Hikami＊＊｝!)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0203000_C02300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Is that the most recent trend?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you mean my\n｛流行アクセサリ名｝?\nYeah, it is.");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0203000_C02400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see people who walk pass me wear\nit.\nIt suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, I was complimented by\n｛Hikami＊＊｝!)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
