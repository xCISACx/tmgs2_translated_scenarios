section "b04_m3_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403075_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "When I'm in the city, I don't really\nget a feel of the seasons, but this\navenue has the feel of Fall.");
        Message_MsgSel("The falling leaves are romantic.", "As expected, Fall is about sports!", "My appetite grows in Fall, as expected.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, the avenue is dyed with a\nsepia color, so perhaps this is the\nfeeling of Fall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403075_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "To me, sports are over after the\nSports Festival.\nI do not want it to show its face in\nFall.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "My appetite does not change\nthroughout the year.\nActually, I am thankful that there\nare more mushrooms on the market.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403075_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThere are people gathering the\nfallen leaves.\nI wonder what exactly they plan on\ndoing...");
        Message_MsgSel("To turn them into bookmarks?", "So they can make baked sweet potatoes?", "... Maybe they're cleaners?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see, making bookmarks from fallen\nleaves.\nFall is about reading.\nMaybe I should also look for a nice\nleaf.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0403075_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSomehow, your imagination is always\nrelated to food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "By themselves?\nThey also have little equipment...\nI will go ask them, so wait here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403075_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Today is a little cold.\nIn terms of temperature, it feels a\nlittle more like Winter.");
        Message_MsgSel("The changing of the seasons is fast...", "We can only enjoy Fall things now.", "Then let's link arms▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right...\nThis year, when I think about the\nfallen leaves, I somewhat feel love.");
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
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403075_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Are you talking about clothes?\nSorry, I don't really pay attention\nto such things.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403075_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Why do we have to link arms?\nAre you planning on stealing my body\nwarmth?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403075_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Wh-!\nWhat are you saying all of a sudden?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...\nIt was a joke,\n｛Hikami＊＊｝...");
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0403075_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "A joke...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403075_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Do you...\nhave fun, no, are you having fun\nsaying such things...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I didn't mean to...");
                Voice_PlayVoice("B0403075_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Am I wrong?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403075_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Sorry, I was being immature....\nYou do not have to restrain\nyourself.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Voice_PlayVoice("B0403075_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You can steal as much of my body\nwarmth as you like.\nI will lend y-you my right arm.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...\nI'll be borrowing it, then～!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, ｛Hikami＊＊｝ and I\nlinked arms▼)");
                Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
