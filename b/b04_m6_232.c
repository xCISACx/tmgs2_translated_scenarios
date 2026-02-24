section "b04_m6_232"{
    int var0 = Date_GetDateOption(2, 69);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406232_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I was absent-minded when I was on\nthe ride, but were you thinking\ndeeply about something?");
            }
        else {
            Voice_PlayVoice("B0406232_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Were you thinking deeply about\nsomething on the ride?");
            }
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us were something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that right?\nI was able to look around far and\nwide.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nI was able to see far and wide.\nIt was beautiful.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406232_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are you saying...\nYou didn't bother to watch the\nbeautiful scenery?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406232_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou mean you didn't watch the\nscenery.\nWhat a waste.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, they were fighting.\nIt seemed to be very serious after\nthey had gotten down.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, they were fighting.\nIt seemed to be serious after they\nhad gotten down.");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406232_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It'd be awesome if this Ferris Wheel\nwas larger.");
            }
        else {
            Voice_PlayVoice("B0406232_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'd say this Ferris Wheel would be\nawesome if it were larger.");
            }
        Message_MsgSel("Like going around twice more?", "If it was, I could sleep well!", "Is the size of it related?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's right.\nIf it was like that, then it would\nbe nice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's right, and it seems\nlike it would feel nicer!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406232_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is it a vehicle to sleep?\nIt's a Ferris Wheel...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406232_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you understand the Ferris Wheel\nis not a vehicle to sleep in?\nSenpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406232_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think that it is.\nThe view wouldn't be as great if the\nFerris Wheel wasn't big.");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Voice_PlayVoice("B0406232_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That it is.\nIsn't it the view on the Ferris\nWheel that makes it better?");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406232_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The gondola shook quite a lot,\ntoday.");
            }
        else {
            Voice_PlayVoice("B0406232_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The gondola shook quite a lot today.");
            }
        Message_MsgSel("It was thrilling but amusing.", "I got scared when it shook.", "Oh? I wasn't paying attention.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes actually, I enjoyed it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, do you really think so?\nThe shaking was pleasant, I liked\nit.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406232_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI'm sorry, I actually enjoyed it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406232_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, is that so?\nWell, it was comfortable to me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406232_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, really?\nThen you should hold onto me without\nhesitation!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh!?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406232_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThen, if you hold on with all of\nyour might, you'll forget about\nbeing scared...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406232_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I couldn't go easy on you without\ntickling!");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-What!?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406232_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, I'm lying, it's a joke! ...\nSenpai, from now on, say so when\nyou're afraid.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406232_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I was thinking of something to make\nyou forget about the scariness,\nSenpai....\nSorry, I didn't realize.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that right?\nI'm surprised by your courage,\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406232_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, is that right?\nSenpai has lots of guts.");
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
