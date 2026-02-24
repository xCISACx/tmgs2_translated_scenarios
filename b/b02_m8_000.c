section "b02_m8_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0208000_H02600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Huh? Is that the gift I gave you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, it is.\nI tried it out immediately.");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0208000_H02700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I thought so.\nI was a bit worried, but it turned\nout alright.");
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H02800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Uh-huh. Looks good, looks good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝ seems really\nhappy!\nGreat～!)");
        Parameter_AddCh1Param(8, 61, 2);
        Parameter_AddCh1Param(8, 60, 1);
        Parameter_AddCh1Param(8, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0208000_H03100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oooh, that's pretty nice.\nYour \"yukata look\". Uh-huh.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Do you really think so?");
        Character_ChFace(1, 4, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0208000_H03200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Pfft, do you actually think I'm\nmaking fun of you?\nYou truly do look nice and cute.\nPassed with double circles!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good...!\n｛Masaki＊＊｝ seems to like\nit.)");
        Parameter_AddCh1Param(8, 61, 5);
        Parameter_AddCh1Param(8, 60, 1);
        Parameter_AddCh1Param(8, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 9);
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H02900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I remember seeing that outfit...\nAnd quite recently, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_BlinkStart(8, 3, (#1), 2);
        Voice_PlayVoice("B0208000_H03000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmmm...\nEither that's your favorite outfit\nor you had nothing that you could\nmatch to change into.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Damn it!\nThis is the same outfit that I wore\nlast time!\nOh～ This is so embarrassing...)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0208000_H01800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Woah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Is something wrong...?");
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0208000_H01900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "In my university, some people also\ndress like that, but in a different\nway...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, I should have put more thought\ninto choosing an outfit...)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0208000_H01200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What's with that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Does it look weird?");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0208000_H01300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "How can I say this... It's odd...\nAren't you feeling warm?\nIf you wish to buy thinner clothes\nalong the way, just let me know.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0208000_H01400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Do you want to catch a cold?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh... Why would I?");
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H01500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, it's because you...\nDo I have to be so blunt in saying\nit?\nThere's a limit to being dense, you\nknow...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 3);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0208000_H01600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hahahahahaha! What?\nNow, where are you headed off to\ntoday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ummm...");
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H01700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "There is a reason why you came here\nwearing that, right?\nUh-huh, I'll tag along with you.\nBut don't wear that at work, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh～...\nMaybe this outfit was weird after\nall...)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #1);
        Parameter_AddCh1Param(8, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0208000_H00900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmmm...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's the matter?\nYou just groaned...");
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0208000_H01000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, it's because I didn't intend\non complaining about your taste.");
        Character_ChFace(1, 0, 9);
        Character_BlinkStart(8, 3, (#1), 2);
        Voice_PlayVoice("B0208000_H01100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "In my opinion, it's a bit... Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmmm...\nIt seems like ｛Masaki＊＊｝\ndoesn't like this kind of outfit...)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0208000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? What's wrong?");
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0208000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "That outfit is nice.\nIt's cute and looks good on you.\nPassed with double circle!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great!\nHe seems to like this outfit.)");
        Parameter_AddCh1Param(8, 61, 2);
        Parameter_AddCh1Param(8, 60, 1);
        Parameter_AddCh1Param(8, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0208000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh. Something feels different today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Is it weird...?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "No no... You look good in that.\nYeah, good. Pretty good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝ seems to like\nthis outfit.\nGood...)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0208000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "That kind of outfit is quite nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? You mean this color?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Uh-huh. The color harmony is nice!\nIn my opinion, double circles!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝ likes\norange.)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0208000_H02000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "That outfit is the latest craze,\nright?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nWhat do you think about this\n｛流行服名｝?");
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0208000_H02100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah, it's pretty nice.\nThe way you wear it isn't bad.\nUh-huh. Passed!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hooray～!\nGood thing I checked the latest\ntrends.)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H02200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "That's the latest color trend,\nright?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you're right.\nDoes it look strange?");
        Character_BlinkStart(8, 0, (#1), 2);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0208000_H02300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "No, I think it's nice.\nIt suits you quite well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hooray!\n｛Masaki＊＊｝ seems to like\nit.)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(8, 2, (#1), 2);
        Voice_PlayVoice("B0208000_H02400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Is that the latest trend?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nI gave up on every thought on my\nmind when I bought this\n｛流行アクセサリ名｝...");
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(8, 3, (#1), 2);
        Voice_PlayVoice("B0208000_H02500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You look so great in it that it's\nalso a present for me!\nYeah, good, very good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝ seems to like\nit.)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        Parameter_AddCh1Param(8, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
