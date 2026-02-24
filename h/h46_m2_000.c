section "h46_m2_000"{
    int var0 = 0;
    Voice_PlayVoice("H4602000_B00000", #1, "");
    Voice_PlayVoice("H4602000_B00100", #1, "");
    Voice_PlayVoice("H4602000_B00200", #1, "");
    Voice_PlayVoice("H4602000_B00300", #1, "");
    Voice_PlayVoice("H4602000_B00400", 2, "");
    Voice_PlayVoice("H4602000_B00500", #1, "");
    Voice_PlayVoice("H4602000_B01100", #1, "");
    Voice_PlayVoice("H4602000_B01200", #1, "");
    Voice_PlayVoice("H4602000_B01300", #1, "");
    Voice_PlayVoice("H4602000_B01400", #1, "");
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_15F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "You won, ｛Shiba＊＊｝!");
                Voice_PlayVoice("H4602000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks.\nAs I thought, it's different when\nyou're here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Do your best next time, too!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4602000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah, I look forward to it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm so happy!\nIt was worth putting my all into\ncheering!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Congratulations,\n｛Shiba＊＊｝!");
                Voice_PlayVoice("H4602000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Thanks..........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm? What's wrong?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4602000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Nothing...\nI was just wondering if you always\nhad that kinda power...");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"That kind\"?\nI was just cheering like I usually\ndo, though...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4602000_B01000", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It might only be motivating me.\nPlease cheer for us at the next game\ntoo, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm so happy!\nIt was worth putting my all into\ncheering!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(2, "M2_15F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "It was close...");
                Voice_PlayVoice("H4602000_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nSorry we lost, even though you came\nto cheer for us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't need to apologize.\nIt is unfortunate, but there is\nalways next time!");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4602000_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah, you're right.\nI'm gonna train for the next game.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I will try hard, too!)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "They caught up quite a lot in the\nlast innings...");
                Voice_PlayVoice("H4602000_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We were too lax in the last\ninnings...\nHow pathetic.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H4602000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Sorry we lost, even though you were\ndesperately cheering for us....\nWe'll win next time.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. I look forward to it.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4602000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Thanks.\nI'll leave the cheering to you,\nagain.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright! I will also do my best!)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "They won, ｛Shiba＊＊｝!");
                Voice_PlayVoice("H4602000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah. That's a relief.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm really glad!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank gosh!\nCongratulations, everyone in the\nTrack and Field Club!)");
                }
            else {
                Voice_PlayVoice("H4602000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "They won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It was a good race.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4602000_B02200", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I think your cheering gave the\nathletes power.\nYou've worked hard,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks, ｛Shiba＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering!)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_Chara_GS2(2, "M2_01F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Voice_PlayVoice("H4602000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. That was unfortunate...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H4602000_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWhat's gonna happen if you're down?\nIsn't it your job to bring people\npower?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, that's right...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though it's annoying that they\nlost...\nI'll try my hardest to cheer next\ntime, too!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost...");
                Voice_PlayVoice("H4602000_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah. Bad luck.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4602000_B02600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Don't make that face.\nThe athletes are waiting for your\nsmile.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("H4602000_B02700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nDo your best cheering next time,\ntoo.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah... I also have to try harder!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
