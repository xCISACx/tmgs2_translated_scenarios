section "b04_m3_211"{
    int var0 = Date_GetDateOption(2, 63);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403211_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThat monkey has been staring this\nway the whole time, and it hasn't\nmove an inch.");
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh? ...\nAh, it is wondering if we are going\nto give it food or not.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Although I do not plan on\ncontrolling a monkey's manners...\nIts face is starting to look like a\nlate student.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403211_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThe monkey doesn't have the\nintention of doing that, right?\nFirst of all, I can't challenge\nsomeone who can't smile.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0403211_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nJust up ahead is the reptile hall.\nI look forward to it.");
        Message_MsgSel("Eh, but reptiles are disgusting...", "There are even young anacondas.", "Do you like reptiles, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There is no need to worry, there are\ncute ones too.\nLike iguanas and turtles.");
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
            Voice_PlayVoice("B0403211_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If there were many hatching, it\nmight be a bad spectacle...\nI am not looking as forward to it as\nI was before...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I have liked the tortoise that\nlives here ever since I was a child.\nApparently it is already 63 years\nold.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403211_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The penguins here always form a\ngroup and walk through the park...");
        Message_MsgSel("Penguins are cute!", "Maybe I should go along with them too.", "So they have a leader.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I like the beautiful posture of\nemperor penguins.\nI am also curious about rockhopper\npenguins' sleeping habits.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403211_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... You should give up on the idea.\nYou do not know where they will go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403211_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Do you really think that way?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403211_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "They may just be walking around and\naround in the park.\nThe walk might also abruptly end.");
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403211_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even so, you say that you will solve\nthe mystery of where the penguins\nwalk?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah, until I know...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403211_C01400", 3, "B0403211_C01401");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That is fine, ｛主人公｝.\nIf you say so, then it is not like\nyou will not be able to go along\nwith them.");
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403211_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nLet us join the penguin troops at\nonce!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehhhh!?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403211_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nNow, if you do not hurry, you will\nbe left behind!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝ is somewhat\nenthusiastic...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403211_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I thought so too.\nI think that they have had a leader\neven before they came to this zoo.");
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
