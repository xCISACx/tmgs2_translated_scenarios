section "b04_m4_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404051_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Amazing place they have here.\nThis is an honest signboard.");
        Message_MsgSel("It's like paradise, floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404051_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Not saying it's not a paradise, it's\njust not anything to make a fuss\nabout.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404051_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "In such a place like this, good\nmelodies would just turn up....\nYeah, something's starting to come\nup.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404051_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What's with that prideful look.\nI know what you're trying to say.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404051_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wonder why they'd trouble\nthemselves to make a garden in such\na high place?");
        Message_MsgSel("No choice, due to the land shortage.", "They wanted to see a remarkable scenery.", "Looks troublesome to maintain.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404051_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah...\nSaying it realistically, you really\ndon't have a dream...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404051_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's it!\nYou can see the full view of\nHabataki City!\nThe scenery's seriously awesome.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404051_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I guess so. The atmosphere's thin.\nI wonder if you'd go breathless\nwhile cleaning?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else {
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404051_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I feel the sky is very close...\nMaybe it's my imagination...");
        Character_ChFace(0, 7, 0);
        Message_MsgSel("Maybe it is your imagination.", "Like it's sucking you in when you look down.", "Clouds looks close, too.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404051_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... You blew it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404051_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah, you're right!\nThe rush is amazing...!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404051_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You're right! The rush is amazing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... ｛Hariya＊＊｝!");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404051_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah! What's with the sudden shout?!\nDon't scare me!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404051_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Hey. What's wrong?");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry!\nI felt like you were really going to\nget swallowed....");
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404051_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I told you, I'm fine.");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 0);
                Voice_PlayVoice("B0404051_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You're saying that I might take the\nstep?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not what I meant, though...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404051_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'm no kid.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404051_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "About that......\nI'm sorry, for making you worry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404051_D01800", 4, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Next time, I'll be careful.\nThanks, ｛主人公｝.");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404051_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See～!\nOnce it rains, it will rain here\nwithin the clouds.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
