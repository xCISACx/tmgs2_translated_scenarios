section "b04_m6_023"{
    int var0 = Date_GetDateOption(2, 2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406023_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah!\nThe bridge and the sea in the same\nview...\nAn amazing scene.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406023_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Look!\nThe bridge and the sea is so close!\nIt's amazing...");
            }
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0406023_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'll restrain from doing that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0406023_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You can go. I'll look from here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think so too, Senpai?\nTo be honest, I thought the same\nthing as well!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, you're right!\nYou say some good things, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 4);
                Character_ChFace(1, 7, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm, where is it shining?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Character_ChFace(1, 7, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Haha!\nI don't catch onto things like that.\nWhere is it shining?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406023_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There used to be filming for good TV\ndramas here.");
            }
        else {
            Voice_PlayVoice("B0406023_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There used to be filming for good TV\ndramas here.");
            }
        Message_MsgSel("It's a romantic place.", "Were there performers?", "A fictional drama.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That may be so....\nBut the rest of their appearances\nwere flashy, too.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, yeah, but isn't it because it's\nflashy?\nThe bridge just stands out.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Occasionally, there were people who\ncame incognito too.\nI wanted to see something like that.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, there were, from what I've\nheard!\nThere were some who came incognito.\nI wanted to see.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406023_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, well, that's right...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406023_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Are you still dreaming, Senpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406023_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The brightness seems like it came\nout of a movie.");
            }
        else {
            Voice_PlayVoice("B0406023_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The brightness seems like it came\nout of a movie.");
            }
        Message_MsgSel("With a scene where two people run up, in love.", "It's a substitute runway.", "The men who built the bridge are documented.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406023_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Shouldn't the scale be higher since\nit's such a large bridge?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406023_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, but that's amazingly common.\nThings like that are boring.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406023_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm～, ...\nThings like that aren't likely.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-So?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406023_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nBecause tourists seem to flock to\nmovies like that.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406023_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I came to a place like this to take\nit easy...\nwith Senpai.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0406023_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So, let's talk about the movie!\nCome on!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think so too?\nI thought the same thing as well.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It seems to be that way!\nCan you land on a narrow bridge!?\nIt's like a good feeling of being on\nthe edge.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Your movie preference is unexpected,\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 4);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406023_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Things like that are simple.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
