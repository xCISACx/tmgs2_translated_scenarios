section "b04_m5_212"{
    int var0 = Date_GetDateOption(2, 64);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405212_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There are so many puppies and\nkittens～.");
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Chris＊＊｝?", "They fight because they get along.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, they're heaps cute.\nI really wanna rustle their fur up!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Both are amazing.\nAh, we have a puppy at home.\nI'll introduce you to it next time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405212_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, why are you saying that all of a\nsudden!?\n...\nAh, the puppies and kittens are\nfighting!\nWe gotta stop them～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405212_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That kitten has no fur!\nI wonder if it's cold...");
        Message_MsgSel("I want to put some clothes on it.", "It seems like cats are different to us.", "I don't want to see, let's go elsewhere.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nI want to give it some clothes for\nall four seasons.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, but we kinda resemble them...\nAh, me and this one look the same!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405212_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's a shame...\nIt's okay, they're not scary.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405212_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The puppies sleep together with the\nkittens.\nJust like lovers, they're all\nlovey-dovey.");
        Message_MsgSel("I wonder what happens when they wake up.", "They really are lovers▼", "Seeing them sleep makes me sleepy.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405212_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They'd probably be fighting again\nwhen they wake up...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405212_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm...\nI vote that they will still be\nlovey-dovey when they wake up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405212_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I mean take a look at them.\nDoesn't it look like they're holding\nhands?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you're right.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405212_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "See?\nIf they weren't so lovey-dovey, they\ndefinitely wouldn't do that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Right. Just like us.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405212_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, and... Eh!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405212_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I get the feeling that you just said\nsomething that was unexpected to\nme...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405212_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right, like us...?\nMeaning that we are lovey-dovey...?\n... Crap, I don't know anymore...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what's up with\n｛Chris＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I've seen that on TV.\nA puppy and a monkey were together.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405212_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, they look so happy.\nThey also look like they're holding\nhands...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
