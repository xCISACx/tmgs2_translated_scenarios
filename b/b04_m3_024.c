section "b04_m3_024"{
    int var0 = Date_GetDateOption(2, 3);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403024_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWe are at the time zone when things\nare calm.\nI am thankful that there are only a\nfew tremors.");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the sea shore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nWasn't there no need to\nintentionally look at it?\nYou can see the ocean from the\nbeach, can't you?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403024_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No...\nthe salt in the air is making my\nskin oddly sticky.\nAre you fine?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, that is the smell of the\nsulphide that seaweed produces.\nYou could call it a sign from the\nocean's eco-system.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403024_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nJust when I thought the tremors were\ngetting rougher, the wind picks up.\nThe sails are an indication of that.");
        Message_MsgSel("It makes me want to draw a pirate mark!", "I wonder if we will go faster?", "I... I don't feel so well now.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are childish....\nEven though I say that, it is not\nlike I do not understand that\nfeeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, with such wind, even if the\nengine stalled we would move....\nHm? We are going a little faster.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0403024_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ehh!? ...\nIn the meanwhile, look at the\nhorizon!\nWhen we arrive back at the shore, we\nwill be the first to step down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403024_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe cruise inside the bay is almost\nover.");
        Message_MsgSel("We've approached the city.", "I feel like going out on a trip, like this.", "The sound of the motor has changed.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, that means the ride is over.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403024_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Not for me, there are Student\nCouncil jobs waiting for me.\nI cannot think about going on a trip\nand the like.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("B0403024_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Like this?\nEven though there may be people on\nthe shore waiting for you...");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403024_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Despite that, you want to go with\nme...?\n... No, I cannot!\nI cannot get caught up in the\nmoment.");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403024_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I have Student Council\nobligations...\nBut I might be at a new stage if I\nlet my feelings decide...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah,｛Hikami＊＊｝.\nIt's almost time to go.");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403024_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...? Ah, right.\nAlthough it was short, it was a nice\ndream...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...?");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403024_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are right, the number of\nrotations has dropped.\nWe are decelerating....\nLet us take a last look at the\nocean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
