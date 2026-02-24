section "b04_m3_023"{
    int var0 = Date_GetDateOption(2, 2);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403023_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is quite an open area.\nYou can see the bridge well from\nhere.");
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403023_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That is quite an extreme idea.\nHow about you look at the scenery in\na more relaxed way?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Now that you mention it, it does\nseem like the kind of scenery you\nwould see in a movie.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, you are right...\nIt is a scene that you would not\nnotice if you were not looking at it\nfrom this angle.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403023_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Looking from over here, the ocean\nappears different from usual...");
        Message_MsgSel("The atmosphere is different.", "Eh, the ocean is the ocean!", "Is it because of the light rays...?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right...\nIt is only natural it looks\ndifferent, because the placement of\nthe bridge and buildings are\ndifferent.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403023_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThe way we look at things are quite\ndifferent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I think so too.\nI wonder if the designer of this\nobservatory made it while having\nthat in mind.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403023_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... The wind feels nice.\nIf I had wings, I would want to fly.");
        Message_MsgSel("Ah, there's a seagull!", "I would want fairy wings.", "You're a poet, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh? ... Ah, you are right.\nIt looks like it is flying\ncomfortably.\nThere are also fish around this\narea.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403023_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nDo they look similar to the wings of\ninsects?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403023_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Saying that I am a poet because of\nwhat I just said would be rude to\nthe people who actually are poets.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403023_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, that is not the case.\nAnyone could come up with something\nsimilar to what I said.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...");
                Voice_PlayVoice("B0403023_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is probably because I do not\nusually say such things.\nI surprised you a little, didn't I?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, a little...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403023_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Haha, I am sorry about that....\nWhen I look at the sky, I get a\nstrange feeling.\nI can speak more openly.");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403023_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So I just happened to say what came\nto mind...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403023_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI wonder how happy I could be if I\ncould express my feelings naturally,\nlike this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0403023_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nBut I do not have the courage to say\nthat yet.\nRight now...\nI will calm my heart down.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
