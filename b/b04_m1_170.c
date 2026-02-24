section "b04_m1_170"{
    int var0 = Date_GetDateOption(2, 48);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401171_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I...\ndon't want to sing, so just choose\nwhatever you want.");
        Message_MsgSel("Choose your best song, ｛Saeki＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401171_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I don't have one.\nIf I did, I'd be singing it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401171_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "T-That's impossible!\nI seriously don't even know one\nsong.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401171_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right, I could... no!\nEven if you can't hear my voice,\ndon't worry about it and just keep\nsinging, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401171_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I wonder why things like Karaoke BOX\nexist...");
        Message_MsgSel("It's to relieve stress.", "Because singing is fun!", "To give you trouble, ｛Saeki＊＊｝!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0401171_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "There are people who get stressed\nbecause of this place...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401171_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I guess, for people who are good at\nsinging...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401171_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401171_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, you've had enough already,\nright?\nLet's go home.");
        Message_MsgSel("The next song will be the last, then.", "Even though it's so fun?", "Eh～! It's normal to stay longer, though?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401171_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A short song, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401171_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's not fun! I'm going home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401171_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Is it that fun seeing how bad I am\nat singing...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not it...\nI just think it's fun singing\ntogether.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401171_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But I have no sense of rhythm...\nI can't sing well with you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you have a nice voice.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401171_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, I do have confidence in my\nvoice...");
                Message_Who(0);
                Message_MsgDisp("主人公", "See? So let's sing together!");
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401171_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Okay...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay!)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401171_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Shut up. That norm ends today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
