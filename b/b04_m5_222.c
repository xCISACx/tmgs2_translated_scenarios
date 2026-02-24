section "b04_m5_222"{
    int var0 = Date_GetDateOption(2, 67);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405222_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow... This view is so nice...");
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405222_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We've fractured the world? Umm...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like the view would have\nbeen better than it is now.\nIf I could time travel, I'd wanna go\nback and check it out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you're right.\nEarlier I was peering out too far\nover the ledge and my heart was\npounding.\nSo maybe that's why?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405222_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What's that thing being used to\ndecorate the roof?");
        Message_MsgSel("It's a luck charm to ward off fires.", "It's called a \"Shachihoko\".", "It's just some random garbage.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh, you know quite a lot.\nI dunno why, but I get the strange\nfeeling that it's working.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "\"Shachihoko\"... Snatch and hoko?\nWhat's a \"hoko\"?");
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
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405222_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, is that so...\nIt kinda feels sad that it's nothing\nspecial...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405222_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It seems like we could do a\nmake-believe historical play here.\n\"There is no need to worry, I will\nnot go astray～\", and such.");
        Message_MsgSel("And you would be the feudal lord?", "\"That is a bad idea, master\", and stuff.", "Huuuh.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405222_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Can't I be the lord?\nMy sub-ordinates will just have to\nput up with me being the lord...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405222_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm...\nThe lord doesn't appear often, so\nbeing an evil magistrate or a\nplayboy would be okay too.");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405222_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "What do you want to be?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll be a female ninja.\nI'll fight for the sake of the lord,\nwho will be travelling incognito.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405222_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nThen I want to be the lord, who is\ndisguised as the playboy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But you didn't want to be the lord\nsince they don't appear often in\nplays.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405222_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's a different story if you're a\nfemale ninja.\nIt's impossible that you would fight\nfor the lord living far away from\nyou.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405222_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... So, what do female ninjas do?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ahaha...");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "\"Magistrate, let us end this.\nTake this golden fruit～\", and stuff!\nIt sounds very fun～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405222_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "\"Lord, may I...\" Huh?\n\"May I humor...\" Hm? \"May...\" ???");
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
