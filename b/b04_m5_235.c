section "b04_m5_235"{
    int var0 = Date_GetDateOption(2, 73);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0405235_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Go-carting was funner than I\nthought.");
        Message_MsgSel("It was going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you mean when we were going on a\nstraight road?\nI thought so, too...\nI'll be careful next time～.");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow, you sound like a pro.\nThen I'll say...\n\"Slamming the accelerator was\nawesome!\"\nHow was that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405235_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Does any good come out of doing\nthat?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405235_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, what did you think of my\nhandling?");
        Message_MsgSel("Sorry, I wasn't watching at all.", "You've still got some way to go!", "It was god-like.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405235_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nCould you use a gentle, indirect\nexpression, then...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right, and that's done through\npractice.\nI'll do my best!");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was bumpy when I was going\nstraight, and I drove off the course\naround the curves...\nSo I am a god, to that extent.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("B0405235_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "We were hit many times by the same\ncar, I'm kinda annoyed...");
        Message_MsgSel("It was awful driving.", "They're just bad, it wasn't on purpose.", "Come now, calm down. Just calm down.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nMy neck was going *crack* *crack*.\nSeriously...");
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
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really?\nNow that you mention it, I think I\nheard a tiny voice apologizing...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405235_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Uh～............ I can't.\nThe person in charge of my calmness\nhas gone out on vacation.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0405235_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Impossible. I can't remain calm.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝, calm down...");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405235_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I can't!\nIt's bad enough they did it to me,\nbut doing that to you too is\njust...!");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405235_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah... Uh...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405235_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Sorry.\nI didn't mean to take it out on you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, it's fine.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405235_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's been so long since I got angry,\nI'm hungry now.\nLet's go have tea over there.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He got angry on my behalf...\nThank you, ｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
